#!/bin/bash

#Logan Wheeler
#CSCE 3600
#Due10-4-2020
#check the status of who is logged in every 10 seconds and report
#each user ID that logs in or logs out during that time frame

#traps ctrl+c
trap trapsignal INT

#trap signal function
function trapsignal (){
  echo " (SIGINT) ignored. Enter ^C 1 more time to terminate program."
  trap - INT
}

#while loop for reading who logs in and logs out
while true
do
  #reads in user using who command to text file
  #counts lines in file
  who | gawk '{print $1, $3, $4}' > oldusers.txt
  count=`who | wc -l`
  echo "`date` ) # of users $count"

  #wait 10 seconds
  sleep 10

  #same as oldusers. creates sed file out of txt then compares it to oldusers
  #creating the list of users loggin out
  who | gawk '{print $1, $3, $4}' > newusers.txt
  gawk '{print "/"$1, $2, $3"/d"}' newusers.txt > newusers.sed
  sed -f newusers.sed oldusers.txt > logout_list.txt

  #Prints logout list
  gawk -v hn=`hostname` '{print "> "$1 " logged out " hn}' logout_list.txt

  #comapres already grabbed oldusers.txt (from beginning of while loop)
  #compares oldusers to new
  #creating list of thos who've logged in
  gawk '{print "/"$1, $2, $3"/d"}' oldusers.txt > oldusers.sed
  sed -f oldusers.sed newusers.txt > login_list.txt

  # Prints login list
  gawk -v hn=`hostname` '{print "> " $1 " logged into " hn}' login_list.txt
done
