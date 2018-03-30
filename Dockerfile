FROM node:alpine

RUN apk upgrade --update \
  && apk add --virtual \
  build-dependencies \
  build-base \
  perl \
  git \
  make \
  gcc \
  python \
  bash \
  ffmpeg \
  sox

WORKDIR /app
COPY yarn.lock package.json bsconfig.json /app/

RUN yarn

COPY . /app

RUN yarn build

# CMD ["node", "src/Transfer.bs.js"]
# CMD ["/usr/bin/bash", "run.sh"]
CMD ["./run.sh"]
