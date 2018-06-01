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
COPY package-lock.json package.json bsconfig.json /app/

RUN npm install

COPY . /app

RUN npm run build

CMD ["npm", "run", "job:internal"]
