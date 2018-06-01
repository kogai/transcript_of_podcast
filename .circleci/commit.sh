#!/bin/sh

STATUS=$(git status -s)
BRANCH="update/$(date -I)"
if [ "$STATUS" != "" ]; then
  echo "DIFF EXIST"
  git checkout -b $BRANCH
  git add audio/*
  git commit -m ":robot: Add new episode"
  git push --set-upstream origin $BRANCH
else
  echo "DIFF NOT EXIST"
fi
