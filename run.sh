#! /bin/bash

STATUS=$(git status -s)
echo $STATUS

if [ "$STATUS" != "" ]; then
  echo "DIFF EXIST"
else
  echo "DIFF NOT EXIST"
fi
