#!/bin/sh

if [ "$STATUS" != "" ]; then
  echo "DIFF EXIST"\
  git add audio
  git commit -m ":robot: Add new episode"
  git push --set-upstream origin use-ci-as-batch
else
  echo "DIFF NOT EXIST"
fi
