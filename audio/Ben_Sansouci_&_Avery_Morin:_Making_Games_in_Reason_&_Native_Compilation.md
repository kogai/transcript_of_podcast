  
hello and welcome to another episode of Reason town a podcast about reason and the commuter that makes it awesome I'm your host today Jarrod Forsyth and we have another interview episode this time with Ben Sasse and Avery Morin will be talking about reason game development native and reason on Windows, which provides the linear course based approach to learning Technologies got lots of content on react among other things

  
what announcement the first-ever reason conference is happening in May in Vienna Austria a really good time I'll be there giving a workshop in a talk and I'm really looking forward to it there still tickets available for sponsors so if your company wants to invest in emerging Technologies check it out okay let's get started welcome to ask you a question that I asked how do you get into reason and what initially attracted you to it

  
okay I think I'll answer that so I went to college with Jen and this one time he kind of like called me up and told me we should we should look into a camel and I was kind of bored at a time and so I decided yeah okay let's do it we read the real world would be cool if we had like a different Syntax for a camel and I was like okay yeah yeah I can do that while he was telling me all this stuff he was still in school and his last semester he had a a research projects and his research projects He decided to make on income of that like how would you how would you change the OU abstract over to send taxes to that like people could write with difference in taxes and you'll be the same AST under the hood so that's like closure people would write would like a list like send text and then

  
people wouldn't have their job description texting and be great and so that was his research project in them

  
 he kind of asked me to help him so I'm so we eat we forts some some some some repo that I forgot we actually implemented for pro camel we had those editor tools that could dumb toggle between camel and in the middle of something so that was a it was kind of funny because that ended up being basically what reason is I kind of had no idea what was going on and then so then he went to Facebook and then invited me and then and I I kind of sign an NDA there and then learned about reason internally before before it was a an open-source thing that's on the Jordan and and

  
 I know you date Jordan is really good at selling reason so I got really really excited about it anyway know if it's sort of excited about it because it was language design and sells seashells did she like it was all about everyone having their own taxes and EST editor rather than text editor crazy out there dreams and I like to two and a half years in right-center that used to be that's right I think to get it started and and we kind of became aware that you know you have to solve the real world product problem so that no product keeps going to talk to you and then you go and make the really fancy stuff

  
 later on so that's when we started doing more JavaScript syntax stuff like that to developer the same one so everyone what's all you want it would been told you about it

  
 yeah I mean yeah then then always had a knack of convincing me to to join him on whatever project is there and I remember back he can miss me to learn JavaScript in a reason Camelot and then I was pretty easy sell I guess cuz I was always into compilers and things like that and especially the idea of getting you no type systems that were cool in a space where you can use them in your day job. I think that aspect of this is what speak to me the strongest awesome

  
 so probably the flashiest thing that the two of you worked on is reprocessing could you tell me first letter audience know what reprocessing is and then tell us a little bit about how I got started sure so basically reprocessing is a canvas like API for drawing Graphics that can run on Weber natives are Android and iOS and working on Jared's working on the rest

  
 it's about time you think about you a question Yeah so basically I saw this thing called processing which is the graphics Library that's been around for producing a lot of time into some research space some educational space and got inspired by that as an educational tool and then decided maybe I can put this to reason and see you know can reason be an educational language and so can we make it to that somebody can get pictures on the screen really fast

  
 yes it said I was pretty cool and then and we serve got to that point and now it's like you know last December like a year ago and we just like okay we got to try and go on this we need to start building it out to be more and more of the of the processing if you I am in the here and there you know making calls about where to stick to that API and where we can make it may be easier to use are or fit the reason why I would be better and like all the things that people say you can't protect quickly if you have time just prove that I guess or at least prototype out proof against that after we go. Okay let's try it out and so we did a couple of you know some projects and then some little lies dreams of us making little games and testing out

  
 you know does this actually work and I and it seemed to work and we need a couple games 2048 puzzle game and then we also participating is really fun it's a game Jammin in 72 hours we made a little game using reprocessing that's all right. I think that put the seal on it for us to okay you can enter 8 quickly in the system and it'll actually hold your hand and help you out rather than getting in your way

  
 Michael mention education processing JS is what we use in our JavaScript course and what we seeing how the processing Library can be really good for education do you still see that as a as a too-short reprocessing are they moved more over into a game development

  
 I think I still see it as a as a future there was one of the influences for me to pick it as an education language and then the other one was seeing these the coding Train YouTube videos so those are pretty inspiring seeing how it was possible to just build up like you know about vacations like pretty surprisingly quickly that that's sort of blew me away I guess when I saw them and I was like to see something really cool and compelling something else to about the coding train is that the person presenting I forget his name is just so excited and he's so happy

  
 about doing it at teaching people and you really get into it a lot of this videos cuz I thought it was so fun just it's a it's a reminder of what got me into programming in the first place actually a statistic of building a building a thing and it's cool and it looks like something that has visuals

  
 so yeah yeah Daniel shiffman I guess it's the guy doing this guy reminds you what got you into put him in the first place whenever I look at a new programming language one of the first things I do is try and make something graphical some art or something because of that quick feedback kind of the quick validation of yes I can I can do this to make something cool to provide that for reason

  
 there's something satisfying about it it's also fruit fruit fruit new programmers it's I think very satisfying just to see things moving around on the screen in that you can interact with yeah

  
 cool what's up what what do you see in the near future of Reason game development or Reason Graphics programming I think it's sort of proven itself over the past few months to be pretty decent for a small to medium size 2T games you know it's been surprisingly stable when we started that we basically didn't know what we're doing and so we've been learning a lot since then and I think that they wanted that they want to make a lot of room in the world for for little 2D games so it's a good space to play in I guess we'll see if I was going forward interactions that will make it more useful to people and so if people are interested in and becoming a part of that effort than we always you know are interested to talk about how could be be made

  
 easier to use and stuff like that we had sound we had it sound to it like a couple months ago just goes like okay for making your game I guess we need that right side at that sort of thing you know okay so if somebody wants to get started with reprocessing they have a game they want to realize what do you suggest is the best way for them to learn at ease reprocessing

  
 there is a processing example repository that will lead to which you can simply clone and npm-install start drawing anything you want

  
 and then on top of that you know if you you're at your service care to get into it and you want some sort of idea okay what is the other game of the season look like then we we did do like a live stream of us making Flappy Bird and then another one of us doing 2048 we took a little longer so he might not get all the way to that one but an idea and in the both of us are programming so y'all were chatting about our decisions and and stuff like that and so I think it doesn't okay job of giving an idea of how you would actually use this to make a game that's that's what we were going for anyway when we were when we were doing that awesome that sounds great well let's let's switch tracks a little bit and talk about Buckle script and BSB native that's a project that the two of you have been very involved in what is the estimated so of VSP

  
 PSP is the build system that comes with Buckle script reason to JavaScript transpiler so as the main contributor to buckle script Bob built a little bit systems in your project and then Bill all of them in the right order and it's just a simple simple way of compiling a whole project and we saw this and thought it would be really awesome if you cumbers who come to reason for the JavaScript story easily get started with Native development as well and so the did the thought was that the easiest way to deliver that experience would be to build on top of what exists already eaten so I took a BSB and and and basically I did a little bit of capabilities to

  
 need a vendor small differences you're in there a little bit more configuration needed but roughly speaking it's it's the exact same you know you run the same command and and the belt system compiles to an executable instead of JavaScript you mentioned that uses the SP native if your compelling to desktop right that's being a fork of PSP means we also support JavaScript we support everything that he has GSP does simply we add support for a week There's a command line flag you can do. And so all of our reprocessing games have been actually buildable to JavaScript and run in your brother or gullible as an executable running underneath machine and sew PSP kind of enables that capability of buildings to multiple targets

  
 yeah so what's in the future for PSP native you've made this for TV out of these capabilities is it going to merge back in as it can become a separate tool question I am not sure about how soon it will be merged in I'm not sure if that's the best way forward also which is why it hasn't happened I haven't spent too much time thinking about that specifically I think right now what we're facing is that we wants more targets So currently you can come by the Java Script can profile the native but it's is quickly becoming obvious that we want to compile to Mobile so IOS and Android and so so I think the future PSP native lies probably in there making mobile. So to two

  
 the way up in developing DSP native has been kind of like how we processing has been developed is very product-driven so for anyone making things using PSP native I just talked to them all the time and ask them what you want to see in the belt system and then I implemented as as people have request so right now it's definitely a iOS is becoming so I added recently am a build script capability which tldr it allows you to write arbitrary camel code during the building process and so that kind of enables the experimentation of you know how I O S howardville android by just in your letting the user do whatever they want and then we'll see how we can like drive this back into PSP native

  
 the other big name in Oakham all Native population is Jay pillar which is now called Dune you said that you needed was kind of bummed that people who came for the JavaScript that are using bucklescript how do you see how would you compare PSP native to Doom I think the difference is you can figure it out figure ability right now has more more more capabilities in terms of what you can tell it to do I think that's the ecosystem has had little too many too many belts systems can I think has been an effort to standardize it and so the problem they're facing is they have a lot of Legacy code that the people still want to be able to compile with this new belt system so they kind of have this problem of needing to support a lot of different things that you can do so that's

  
 where'd you go to shine sand on the other side PSP native doesn't have that problem because we're kind of in this new world of jobs could people in building little reason tools or Reason games are or reason we we we kind of want to cater to them and so we're trying to build the simplest possible thing that allows people to to get started which means that we get a slightly faster belt system as likely easier to install those are the things that we will reach a point where it's not too much of a pain to to to use either and then switch back and forth or have him communicate somehow sure

  
 okay one of the one of the cool things that BSB native has that is more rare in ochem Old World is it supports Windows can you tell us about okay Milan windows and what was required to get that working

  
 yeah it was there was a bit of an effort. I mean so story time

  
 oh, has Cora code always worked on Windows but we we took it as a goal that we wanted Ocala to work on Windows and not have to do anything fancy you already know Windows subsystem okay we want you know speed around in CMD. EXE

  
 just pure windows and tell it was a bit of an undertaking but it came together I was surprised that there were some pretty funny moments along the way for one example you know one of our goals also was to make it so you didn't have any other dependencies so you can go and install PSP native on Windows in and just install it and it's fine you know which meant we actually have to ship them in g w c compiler I'm in a couple of other utilities like that quietly behind the scenes and have it have a camel use some sort of relatively to wherever you installed PSP and some weird stuff like that and so we are struggling at one point with compiler to find some

  
 Google that I needed to Aldi or something like that cuz compiler calls into Unix tools that it assumes are available globally funny stuff manipulate in the past to sort of Tallow, where those things were and at some point we ran into some problems and it wasn't finding this thing and we assumed okay so it's not this system, Snappy propagating the path properly to Windows and it's a must be some weird bug and standard library and so you know after a bit of fussing around okay we have to go make a modification to the Sea implementation of standard Library this is like two days later I can work on this for a week. Okay man and I know it wasn't working for the longest time I couldn't figure out why I changed and picked up with your last joke Amal ships a prebuilt fight code compiler that uses

  
 that didn't have I change it to the Stanley that the cardigan realizes Windows Windows path variable is a capital P and then lowercase ath capitals and so we change that as bad as it was about a couple weeks worth of work that took it back to her but anyway in the end we managed to make it work and I'm pretty cool for our development and so we had to do some you know talking with other people and I think it's still going to be a process or we can really sort of

  
 say that this is a solve problem completely you know I think it's important to not just okay we have support for Windows by short who won and so I think it's still processing editor Chilean stuff is still something that we want to tackle and make better on Windows using that stack anyway okay and so as far as like what's going forward why would be good to focus on is probably that at least as far as I'm concerned cool so you have PSP native working on Windows processing as well weeks worth of work that we put off for a while still not a hundred percent yeah I think I still need to fix a bug on that platform

  
 as you might imagine so sorry a lot of ways to have sound driver setup for instance in Linux and still probably isn't perfect taste different window in system STL doesn't like pick up automatically have to tell it or something like that sorry processing what are the standard sizes STL which is like I got that form when doing library and see and sew on a Mac but that we could manage to do that till the next week is just too many ways for to be configured PSP to Windows but it also motivated to get that figured out so now install times faster there was also one of the motivations for the build Scripts

  
 been mentioned earlier where you can write Arbor Trail Campbell code that runs during the build system because you know a lot of the way a lot of packages do that or the way we were doing it too before was no you have makefile you have a bash script and you run out of the other than that that doesn't really work on Wii out with build the distilled Scripps ability we shipped a little library that that kind of automatically gets LinkedIn to your your bed skirts that exposes functions to compile C code and those functions to swell work on all platforms because they use R R O and C compiler that that we shipped with the SD native you can call GCC in a reason it's a normal functioning and it can compile a new order my PSP need it will automatically link all the stuff that you can buy the object files and and what do you say around C compiler

  
 men GW like this

  
 write the prepackaged one that sounds really really cool because it in terms of getting packages that will then reliably work on Windows yeah that some one of the fancy ideas that we had or that Avery had a while ago was how can we turn resin into a good bash alternative because one of the problems with one of the good things about bash it's really easy to write and make little skips but one of the bad things that they won't run on all platforms and so it be nice to be able to just right reason somehow and and have that as a good alternative for small steps in so this is kind of our small nests extremely incremental approach is GCC you know we've worked enough libraries to to realize that you know a lot of them are just a bit of Reason code or a bit of Ocala code in his some more fancy stuff

  
 going on in the you need to be able to do and so that was important for us to be able to expose that functionality sure windows are reasons strengths and what are its weaknesses for somebody listen to this who's just wondering about whether they should look into resend what are some reasons to start with or some reasons not to

  
 I think it depends on what you're thinking of of doing one of its current strengths are the so if you're thinking of building a web app I think his did the strengths are clear it's a pretty it's pretty easy to set up the tool chain it's just 1:10 p.m. install really easy to run its really fast you could get compiled and it's and it's really easy dinner up with existing JavaScript library so make reason pretty unique

  
 and I would give a great reason to start I didn't know if you want to add like I checked language inside an existant JavaScript code base I think reason is the potentially the best best way to go about this thingy the weaknesses would probably need would probably lie on the movie tomorrow native side there's less people on the reason side of things which has its own little world but it's a little bit less clear how do you add reason to an existing native back-end for example and that's mostly been because less attention has gone to that side

  
 but I think so

  
 the other thing to is them

  
 there were none of the tools that we built are 20% perfect to give a small example reformat so reason comes with a A4 matter which you can determine Stickley format your code which kind of helps eliminate you know debates about formatting the thing about it is it's not perfect there's lots of instances where the code touched you know everyone agrees looks bad and those things are definitely fixable but those are things that we need to work on it takes time for people to find the problems and then go in the in the parser and and and contribute so I would say their weaknesses is. You know we're not it's not like an amazing experience but we're heading towards they're in and the effort is actually really driven by the community so you know I would encourage anyone who who sees any problem

  
 to jump in and help out because that's kind of how we working we really welcome people doing that that weather is opening an issue or yeah I'm glad I have friends who who vote I don't like this or like this and ask them you know why did you open an issue and they're like No And I want to open an issue someone that someone will go around and fix them at some point again to divide between two jobs that I think the JavaScript side of a reason it is very much more much more production-ready I think a lot of companies are using it's and it's pretty stable at this point so that's nice cool well speaking about Community contributions a reason dojo in San Francisco with that right yes

  
 I'll tell us what that is online

  
 we we want to help people get into The Language by getting everyone together to build something and so you can you get you get to work in a group. Thus I think the way it will work is that we will split up the participants into smaller groups maybe three four people and one person in the group project I think I'll just be pair programming in so it's like very low pressure have fun and there's going to be no reason for senior people I guess walking around helping out everyone and it is at you know you learn best when you build something and you learn best when you build something with cool people around you building similar things so especially if they have some experience

  
 that's in the question to get it solved right away that's right that's right now are there any projects that you like to highlight things that you've seen a really cool for sure I was just talking about Shaun Shaun Groves he's a very prominent figure in the closure closure strips actually jumped on reason pretty early where the reason native actually and he's been yeah she just bought into the dream and and wrote an entire server side like thing he's starting his own company and he just fully bet on the unreasonable and so his all back in is a reason native and with graphql and very you know bleeding edge technology so I got a ticket to Sean for for trusting you know the community to continue to build a good tools and and contributing himself and chipping he has a has a product I mean

  
 Zachary out yet but it will be cool so that's why I guess I'm Discord think his name is fine I'm sorry if he isn't he's he's been super super helpful he's been contributes so much to take to the reason Community making so many jobs for bindings and types and I know this is extremely hard and interesting. Code dumb code to write polished thing called Red X which is basically repository of all the reason projects and it just kind of has a list of all the with the project people then you could search on it and the doc's right there and it's just really really helpful see any thing that was written in reason on to start with their help to not rewrite stuff

  
 Community together a bit yes I'll be discovered nude libraries and stuff like that yeah that's really cool awesome so if you're looking for a library in reason go to to Red X and and look for it will will have a link and the last child is it's kind of obvious but I'd like to reiterate it's a bob or humbo maintainer of skirts and USB and he's basically of the Soul contributor to the project and what are you built is is truly remarkable the transpyloric is absolutely amazing on on many levels in the blood system is also absolutely amazing it's it's the fastest thing you've ever seen you and so if he wasn't there a lot of the value that reason has what which is not exist so huge shout-out them definitely

  
 that's that's all I got for us thank you so much for coming on the show