APP := $(shell gcloud config get-value project -q)
VERSION := $(shell git log --pretty=format:"%H" -1)
REPO_NAME := github-kogai-transcript_reason_town_fm
NAME := $(APP)/$(REPO_NAME):$(VERSION)

.PHONY: test
test:
	echo $(NAME)

# Need when init
.PHONY: set
set:
	gcloud config set project transcript-reason-town-fm
	gcloud config set compute/zone asia-northeast1-a

.PHONY: build
build:
	docker build -t $(NAME) .
	docker tag $(NAME) gcr.io/$(NAME)

.PHONY: push
push:
	gcloud docker -- push gcr.io/$(NAME)
