#!/bin/sh

STATUS=$(git status -s)
BRANCH=master
if [ "$STATUS" != "" ]; then
  echo "DIFF EXIST"
  git add audio/*
  git commit -m ":robot: Add new episode"
  git push --set-upstream origin $BRANCH
  curl -X POST \
    --data-urlencode "payload={\"channel\": \"#general\", \"username\": \"Bot\", \"text\": \"Transcript has been updated\", \"icon_emoji\": \":ghost:\"}" \
    "$SLACK_WEBHOOK"
else
  echo "DIFF NOT EXIST"
fi
