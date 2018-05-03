  
hello everybody and welcome to reason Town episode 2 here I am with Jared my Cohoes High School Host Murphy Randall we are co-hosting it up today and today we're going to talk about actually getting started with reason for the very first time now I just recently did this so I've got some opinions of my own how long ago did you get started with Jared a couple of fall starts starting about 2 years ago

  
so this was back before half of the tools were using were in place so I kind of had to learn as it along

  
 and makes sense have you help other people on board since then so this is this is still fresh for you just from a teaching perspective you know I did the first thing we should talk about is like having a project to get started with the project that I started with was basically just using reason for like to write JavaScript and do a bunch of JavaScript in her off and like trying to do library wrapping I don't think I would recommend that is the way most people get started with you that's kind of one of the more painful Parts in it it took me quite a bit of a headache e-learning so maybe if you are getting started choose just like a simple code exercise or if your if you are a react office you're not oh maybe start with a little react app would you say that that is a good one Jared we're doing the Advent of coat and starting out with reason and using those little code projects to get into it seems like a great thank you don't have to do a whole bunch of like framework messing around is mostly just logic in life

  
 but yeah what whatever you do have have something you want to be building that's the best way to learn to code great point and so that's why I was able to sit through the headaches of doing in route first cuz that's exactly what I wanted to be doing with her up so it was it was worth it to me and I'm glad I did in the end so that was my project and so you dear listener pick a fun project for you and let's get started so first thing we wanted to cover was the they available in recommended learning resources for getting started and very first thing there is that the getting started guide from reason so these resources are split across a few different web sites right here because there are a ton of grew out of two different projects there's the the reason project and then there's the Buckle script project where Michael script is the actual compiler that turns your your source code into JavaScript and then reason is the syntax layer and has

  
 couple of other things going on for like how to write the reason syntax then we need docs for the how bucklescript interactions JavaScript and do you think you love me we didn't write this down but do you think you'll ever have to be visiting the old camel docks or how how far outside the trodden path I guess so if you stay in the basics you should be covered with the reason is Buckle scrap yard

  
 so there's that there's a reason getting started guide which will Lincoln then show notes reasonml. Get help. IO and we already mentioned the Buckle script getting started guide to getting started guide just like the Buckle script site for the docs that have three guys for like oh this is how you do dinner at cetera and then there's a tricky thing which is less easy to get to but it still necessary which is the Buckle script standard Library Doc's what is the buckles group standard Library dress is a rapper / OK Google where okay what's been around for 20 years and one of the funny things about

  
 okay well as it's developed is the the actual included standard library is really insufficient and kind of Patchwork e where you're like oh it it has these things I want but why doesn't have these and so there are actually like 4 different majorly used and competing kind of batteries included and none of them are designed to be used directly in compile JavaScript way sobacos who came along and it's like well be included in the library doesn't cut it so we need a couple more things and so sobacos go to added several things that are specifically for JavaScript array access and you know JavaScript promises and then a couple of other helpers that just were missing from the standard Library tomorrow's weather like for example node apis right so you can actually use reason with no more easily

  
 Dom apis the wheel for libraries I see here are JavaScript node dumb and Bs I haven't said I guess he just doesn't have anything in it has like a dynamic Library module

  
 doesn't seem like we'll be using that a whole lot but I have had to use this extensively for JavaScript promises and Jason for example those two things that mainly where I put it so far so so that's that's a good thing to have in your tool belt too but less low level is your wonderful tutorial on getting started with reason and buckles crime Patrol Lincoln to the show notes to you I wrote this over the summer I think and it was kind of it at a time where there were almost zero blog posts about reason and I want to like me up if people would keep coming in and be like so how do I get started and actually this was before reason had a well-developed documentation site as well so they were there was like almost nothing there and I was like oh I want to just kind of

  
 do Alana long explainer that people can takes you step by step how do I just get going and that's what it is okay so it takes you it to create some I'd like a basic react app is that where we go to I think I just get to hello world I don't know get in to react at all but if you poke around on your website I do know you have other articles where you get deeper I have quite a long article about the ins-and-outs of Reason react and how it's different from react and how you make components not going to say just going through you are your blog entries you should be able to learn tons about reason reacts and Native compilation and other things you've been very descriptive so that's awesome okay so there's some getting started resources anything else that we missed on there or we still kind of seems like maybe they learning resources are still in the early abundance stage and not in the overabundance stage

  
 articles would be join the Discord Channel and yet you know real-time help for you know you paste in uglier message and say what it was even going on and there people that will help you smile through it

  
 that was very important to me too I forgot I forgot the cat and now it's but as I was getting started as well that was essential because that have questions that just what I can find in the Box in people wear their answering and not didn't nobody call me your name is there anything went to the super nice so Discord there you go and is there is there like a free note IRT for those who are not into this new fancy chat apps out thing or you just have to buckle down and go with this cord if you want help but it is far less populated

  
 so don't do that unless you are desperate and can only do heresy okay so there's some good links good learning resources what about creating a seed project like we don't have to go through all of the details of how to use everything but if we want to just get started and get some cold running it what's the best way to get you know how they're like a million reacts you jackses there a good that are good Buckle straps for a good reason seat project to download there is a reason react example project that Chang Liu has on GitHub that you can just you can just clownin mpm install and get going and additionally bucklescript includes a can of a skeleton generator like like young men or any of the other things where you type of command line and it will generate a folder and the config files and you know kind of a basic source code setup

  
 okay then we can get that by finding the getting started guide that is actually into getting started guide from reason right is you it looks like you in payments lbs platform and then you can just say i b s p in net and with a name and then you give a theme look at their multiple different themes to there's like a just a just a hell of World Records in hand react version so that'll give you a full thing of a grounding and one important thing that will generate for you that I didn't I didn't do this when I was getting started so I didn't had to build this myself but you do need a file called BS config because there are multiple different versions of the reason the syntax and multiple different ways the compiler works now if you're used to typescript this BS config file is way less complex in the typescript config file which is nice you probably won't spend more than like 2 minutes skinny and getting it worked out specially if you use the example but it looks like you in that BS config file you have to specify that you want reason to text version 3 or

  
 listen to this podcast later because Tyler will will adjust it send text based on that right now if there was a big change in October and sew in in order to have the new version in at you want a specialist specify what's intek series

  
 I'll also make a note there that I really wanted to have insource compilation so by default the way that the Buckle script compiler works is that it'll take all of your files like you'll give it fails compile and it'll recompile gas and stick them inside of a a predefined live folder that you can't change and so you'll get a bunch of JavaScript file. Put in that folder there's one other way to make it work which is what I was hoping for it which is in line songs compilation where you can have your reason files and when the compiler runs it'll put them right along your reason files and you can give them one or two extensions either. Yes for it. BS. Yes and that's what I typically go for is the. Vs. J s in line compilation because it keeps my files altogether do you know Jared of a of a time when you would take one vs. the other and sorceresses live folder

  
 so when not on that I think that the default has now changed to be in stores compilation oh okay I said somebody ask me about my story all just yesterday and were like I'm trying to fall asleep toriel but all the files are showing up next to my source files and so we had to work out how to how to turn that off but it kind of depends if you're going to be in operating with JavaScript a lot definitely go within Source compilation I'd say like if you have JavaScript source files and reason source files that you want to talk to each other and it's easier if they're cold located

  
 and if you don't want to see a lot of generator JavaScript when you're browsing your code then maybe go with extra month I give year if you got a pure reason project and you're cool and you're like yeah I don't really need to

  
 don't worry about doing any interrupts up I'm just going to make my whole reason project and I'm done maybe that's on you want to not do answers compilation

  
 yeah that sounds nice or maybe if you're building at an Indian module to actually published in p.m. as JavaScript for your writing it and reason maybe you just use not interest compilation and then when you're doing you're in public she just point the JavaScript words to that live folder interesting these cases so we decide what what was best for you okay so there it doesn't my only caveats with the with the recent PS config file I think that everything else there's pretty simple so let's talk about the package management so I have done this now this BS be in it I've got this basic reason project now let's say I want to use something like moment JS write to to do some date manipulation stuff how being a an uneducated uneducated that's not the right word at all and uninitiated reason user just brand new to this thing here I am thinking like okay now I want to use a moment JS cuz that's what I know what do I do

  
 first step

  
 so there's three project that that came out just couple weeks ago that is called Reid X and it is an index of all the reason kind of buckle script packages that people have released so you can go on there and search for moment and the thing will pop up is BS - moment which is a rapper library that somebody already put out there that raps moment yes in a in a reason package so that you can just use it with all the types working out well so if I get BSN on it so that's that's awesome that's really cool that there's this repository now let's say I get BS Moment by Justin sabias moment or do I install be at the moment the rapper and the moment Library

  
 the general practice at the moment is for rapper libraries to include the dependency so you just install BS moment and you know add that to your package. Jason and then you also add it to your BS config. Json to signify this this is not only a dependency that I have enough bottles but also it is is a reason dependency so buckle switch module is very actually getting it installed with yarn or within p.m. and then the BS config is to say the buckles art compiler should be aware of this node module because it's recent

  
 right and the reason there's that distinction is because you could also just install random packages off of npm and then write the rapper cut yourself and in that case it would be in your package. Jason but not in your business so writing that rapper code yourself you would just basically add a reason module and do the whole importing of the module inside they're using the the natives apis that's what I ended up doing it I would want to make sure that my pelis package had the library that I was wrapping included in the dependencies is that okay so let's talk about for example the module system sorry not for example for a moment for a moment let's talk about the module system because this is a different approach then maybe JavaScript node people are used to so if you install be at the moment for example there's not a time when you have to import moment and then use it it's a global namespace so how does that work out

  
 with module conflicts for example I mean like if I had to libraries called moment what would I do

  
 but it wasn't even one more like four dates and then one word for like someone decided to write a library for like memories that I'm using I don't know what to call it Mom I said I have this conflicting names baseball what I do about that in the JavaScript World you'd you to have this problem to right where it's just like only one and p.m. package can be called moment

  
 and it feels different and reason because there's no explicit import and the thing you can't do it is if you want to have a source file in your project called moment. Re

  
 and you also have a moment third-party library that that will not work okay and so. That's surprising when you first come across as like you know like this feels all restrictive I want to be able to explicitly import things and when I first was getting served with with reason and no camel I was really unhappy with this but I've I've gotten used to it and maybe it'll change in the future but this is actually kind of the same way that

  
 that Swift Works to some extent there are there other languages that also have kind of this automatically available namespace so in the theory that like I say I were to make a different library from moment from BS moment and I called it like BS moment Murphy something like that and I don't and I'm like this is a horrible idea but theoretically it could happen right so let's say I call it BS moment Murphy and then or whatever and I completely change it so it's not a date library but it's like like I said before like some memory thing or nothing like that and then I actually call my my module moments that I'm so that's possible that you can push both of those things up to npm but you won't be able to use both of those libraries in the same project correct that's right so basically you just want to look at the library trying to use and if you do end up with a namespace collision someone's going to have to rename you know

  
 but hopefully that's not actually going to be a practical issue very often months support for kind of adding a super namespace two packages that is just based on kind of a 10 p.m. named okay and it it hasn't been fully fleshed-out yet there there's some things that make it awkward but I'm hoping that'll be the future very cool alright and I really don't think that getting started you'll have to worry about that listener but I just wanted you to be aware of it and in case somebody says did you I heard this dumb thing about reason you could be like that. Maybe it's fine and maybe if your if you are that critic maybe you should rethink your opinion

  
 sounds good anything else on the packages I think that that's pretty straightforward immigration acts like a big deal in a a typed language like this you really want to have an editor it's got your back that gives you auto-complete and hints and stuff and that there's nothing about if you're using Java without Eclipse you are dead in the water but if you're ready you can just kind of like make up anything and it'll at least run and then crash so one of the things that the reason pilot is done is is make some really nice sweater plugins that have can all the fancy autocomplete things that you expect which is super super great for development work and actually that's the cool thing I love about this is that with the whole

  
 is the syntax changing and not like the underlined language some of these plug-ins can reuse existing IDE plugins that have been developed for a long time for okay so they're already Sweet even though they haven't had a whole lot of time to do 12 element

  
 Sofia the First we got some notes here that we're reading through together the first one you paste in place of injured was the reason online playground

  
 and that's not the way to kind of get started without having a mess with actually just about any of the things we were talking about you don't have to do and it's just an online little text editor playground thing where you can type in stuff you can see the jobs for Pitta compiles to and it'll run it for you and we will put that link in the in the show notes but it's it's just the try reason page that's pretty neat so it runs does it it doesn't let you do packages or anything just running right now right that's right to see what the compilation appetizing to get some some experimental stuff done okay so let's say we want to get started with a real project and use our editors Step One is don't install open which is the the camel practice management solution or Merlin so I'm just saying that right now because I totally messed up on this so before you go farther

  
 remember going inside of those things if you find yourself trying to install them stop and go back and read the instructions we can really tell you what to do so there is a page for getting started with editors on reason the mailbox and will put the links for that in the show notes as well that'll tell you that you shouldn't install this thing called recency Lights of the two packages you should have installed RBS platform and reason CLI Regency Liu you certainly want to have installed globally so that you're out of there is can reach it because platform you don't need to have installed locally that can be / project because that isn't needed I don't think for your editors just reason C L I am I correct in saying that that's right so one thing that is maybe a little unexpected is that the the editor plugins use artifact that dead bucklescript generates

  
 so when you when you sharpen a project before you compiled it all the better plugins won't really know what to do so you run compilation once and it will generate some some files that have all the time information for all the source house that you have and then it can really get started perfect so so we get reason seal I installed Tyler project and now let's have the two different main editors that you and I use I use Adam you use the S code regularly so how do you get started with BS code

  
 service code there's just a single package that you install it's vs code reason I'm out and that's it it'll it'll find the reason CLI installation that you did and it'll give you hover for type in a command click to go to definition of a bunch of things Auto reformat just very super cool the same features are available in a day but right now you need a few more packages to make that work out so there is there is an experimental package for making atom IDE work with all of these things but the best solution I found so far for Adam are the language of Reason plugin for doing syntax etcetera the reason refund plugin for doing the reformatting and then oh camel Dash Berlin now when you doing this is why we were saying don't install a family Berlin because some of these packages will say you need to get opium and saw the Maryland installed and Bubba blah. Don't do that just install those three plug-ins for Adam and make sure you have reason seal I install then you should be good to go

  
 USPS code cuz I broke vs code that way too and clicking it autocomplete you can get an editor checking of errors it's really really quite excellent

  
 when you run into diapers you don't understand drop them into Discord and then people will be happy to help you out and you know what's cool about reason to mount it said they've really Day meaning also Jared have really made a lot of effort to make the error messages friendly and understandable Elm has done a great job of that and reason is also doing a great job of that so expect a friendlier version of working to get things done and help getting out in the compiler then you might have expected with other compiled languages which we want this tournament in here

  
 yeah if if you're used to fighting a compiler hopefully this will be a nicer experience reason isn't quite to the level that Elm is but we're hoping to get there but it takes time to do great stuff so last thing that I have the last note that I have is about the show because we have finally launched a patreon profile for the parrot effort for both this podcast and for Allentown soda paste that in the show notes and so there is an opportunity there if you are enjoying the shows and you want to support them to go and offer a little bit of a monetary support there is a a spot open for a fan with sponsor and so if you would like to get your company sponsoring the podcast then we are open to that in that way otherwise yeah if you are interested in an offering some support then we'd be glad to receive it at Pat Rampage

  
 hi Jared well we got exciting plans for the future coming up and we are grateful to everyone for sticking around listening to us any last message from you in the future will we're hoping to get some very interesting interviews on here about people doing cool things in the community thank you for listening