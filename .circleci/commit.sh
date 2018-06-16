#!/bin/sh

STATUS=$(git status -s)
BRANCH=master
if [ "$STATUS" != "" ]; then
  echo "DIFF EXIST"
  git add audio/*
  git commit -m ":robot: Add new episode"
  git push --set-upstream origin $BRANCH
else
  echo "DIFF NOT EXIST"
fi
