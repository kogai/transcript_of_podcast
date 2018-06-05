#!/bin/sh

<<<<<<< HEAD
if [ "$STATUS" != "" ]; then
  echo "DIFF EXIST"\
  git add audio
  git commit -m ":robot: Add new episode"
  git push --set-upstream origin use-ci-as-batch
=======
STATUS=$(git status -s)
BRANCH="update/$(date -I)"
if [ "$STATUS" != "" ]; then
  echo "DIFF EXIST"
  git checkout -b $BRANCH
  git add audio/*
  git commit -m ":robot: Add new episode"
  git push --set-upstream origin $BRANCH
>>>>>>> 530703221e647f861b67ddca9a4c3bd6c73ee480
else
  echo "DIFF NOT EXIST"
fi
