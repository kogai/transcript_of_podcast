  
hello everybody and welcome to reason Town episode 9 today we're going to talk about server-side stuff I'm here with my lovely Cohoes Jared hello Forsyth yeah it sorry that I didn't commit to the saying that name but that's okay I was thinking today is sponsored by Tyler McGinnis. Com which is the Linea corse based approach to learning web Technologies thank you Tyler we really appreciate it and were sponsored by day one just the company I work for we make a journaling in our life archiving app I loved one do you want to poke your internet your company and I work for Khan Academy which is a non-profit teaching the world pretty much everything

  
Khan Academy got me to college I'm just going to add this in here to see if anyone else if you're struggling with college biology also what we're focusing mostly on Middletown High School students right now but that we have caused all content that's really nice for Genesis well yeah I mean I would not have passed physics or linear algebra if it were not for Khan Academy so go on there too to learn economics and stuff big deal awesome thank you kind of got to me and that you day one so let's get right down to the content Jared since we're recording late at night tonight let's it might be slightly shorter said we'll see don't hold us to it we'll see but they were going to talk a little bit about writing servers with reason that's right if you are thinking about writing your server and reason you're like reasons awesome servers are awesome let's put them together we've got some news for you don't do it goodnight everybody

  
some reasons to do it kind of a lot of reasons not to do it and we will give you a call yet but first a really good kind of pearl of wisdom give it to us okay so we're not being boring right okay well okay so I was listening to another podcast that I appreciate recently and the wise person on that podcast said just be boring as possible on the server like your server should just be so boring in this person particularly rights iOS apps so their main deal is selling a beautiful IOS app and they're saying that the server should just work as simply as possible now I buy very much resonate with that idea so I'm going to activate here but I'm going to modify it a little bit because not everybody's server should be boring there are servers that should be really exciting and fantastic if that is what your company's product is if if you're selling an awesome server then make you shiver awesome many of the people that are listen to this podcast they're selling a website or web app

  
or where an IOS app for an Android app not so much an awesome server and so I'm going to say that each company has a limited amount of innovation Capital if that sounds to business see where do eyes what it means is like you only have so many hours and so much money that you can spend on figuring out new things that Novation budget precisely and we all need to be really careful how you choose to spend that budget because it can really easily bleed out I mean I don't know how many of you say w ask her if you've used a wsp pretty easy to just add stuff and then you get a bill for like $15,000 the next month and then you're like oh no I think it's the same thing with Innovation budgeting too because you like I'll just use this new tool here and I'll just use that interesting using there and then pretty soon they add up and they can conflicting before long you have no work done and it's been a month started plenty of side

  
FedEx wear what I want at the end of it is an app or a game or something and so I start the app and then I'm like oh well I've always wanted to try out this new database and so I start working there's this hot new server side you know there's this hot new web server framework that just came out I'll add that onto it so and and pretty soon I'm just Browning in all of the things that I have to learn in order to get me into the app and of course I never get to it

  
yep precisely that's that's me too and I want peanuts with a specific stories with this happens to me all the time so just a word of advice would be before you do reason on the server or before you do it any number of awesome things or use reason at all like we love reason we use it but just consider the cost are you willing do you know how much it's going to cost you time wise and money-wise and are you willing to spend that for for the return and it's good to just figure out what am I going to get from using reason and is it worth what I'm going to put into it so that's it oh yeah. Murphy has been trying out reason I'm a server compile to JavaScript and there's a lot of learning that come out of that and so hopefully by the end of she'll be better informed about why you might want to choose it or not yes yes and so maybe we talk for a second about what your options are server-side and first let's let's talk about Native because

  
we all talked about How Sweet It Is that sense react or react to their sins reason is based on which is super sweet cuz then it'll be fast does that apply to web servers hypothetically yes but the story for compiling reason to Native is just so much less mature than the story for reason to JavaScript on the web and I I like reason tornado compilation I've made some games that made some servers and there's a lot of fun things to Tinker with but if if you want to write a web server in reason you are dealing with sockets

  
right you are you're writing HTTP header parsers really cool but you might not get work done for a long time and so just it if if that's your jam then then reason native is for you most people again. That's not your competitive competitive Advantage you don't have time to write a new web server Library so you're not going to be saying for example well do I go with rails or do I go with reason native cuz it's just not as nothing should I go with assembly or reason it won't even made it will be easier than assembly actually let's pause here for just a second because I didn't tell the story to be anyone till it really quickly just to rehash the point we already hatched and patched again I was on Reddit and I read this post from a user that said I like what's the best way to get started with doing normal old standard server-side rendered HTML

  
in reason on the server and I did answer the question and I said just use rails because that's the same thought there is like if all you're doing is solved if you're if you're trying to get the answer for the problem that has been solved by so many other Frameworks over the past and the languages over the past 15 years just use one of those things and then your work it's done and then you make money and then you can do your other cool thing and reason and have fun with it right but like that part that's that's boring just do it in the boring thing unless like if you have zero knowledge of Ruby and stuff maybe maybe it'll be just Express right there so many if you're coming from so I think we've established reason native is very very not boring let's talk about reason to JavaScript on the server which is still not boring right yeah yeah it's almost boring it seems like every boring but not quite so your choices for reason on node like reason compiled

  
JavaScript running on no it at this point Express is pretty solid we know that expresses a good framework that's invented framers been around forever lol I don't even use happy Happy's also establish their there plenty of Noah Frameworks here's the cost though you're going to have to wrap things which means you're going to have to use external calls from reason to call out to existing Library there's a good one that already exists for Express so you can get a good start there that's pretty pretty good right away but it likely won't cover the express plugins the Middle where that you want so like you can get started with it. Hello world thing Inn Express but like let's say you want to use bodyparser or it was a call like I don't know what it's called to like multi-part request like there's another thing you probably have to wrap and then like what if you want to do some authentication authentication yes and see like a passport or like what if you want to do some Jason

  
Json schema validation you gotta wrap that so like each piece probably isn't wrapped and doesn't exist and if you want to do sequel you got to wrap that and I'm going to plug that cuz I'll talk about it in a few minutes that said it once you get into the groove of wrapping JavaScript libraries it it's pretty straightforward right it is not it's not something that's like I'm going to sink hours into this at the point where I am where I am I could look at okay here today if you haven't even use of passport I could probably write the bindings in under half an hour just a few minutes before just a few minutes depending if it's just a couple of calls that's a few minutes but a few minutes if you've been doing it for awhile the first time you do it it'll be a couple hours just trying to figure everything out and then you'll be doing that for a lot of hours so that's that's one of the costs their Smokehouse but it still cost and it could nickel could be a nickel and I'm not a thing where you spend more than you mean to and also a warning

  
that is do you really know the library that you're wrapping very well I've spent hours trying to debug thinking that my rapping had some problem with like the way I wrapped the light like like reason was having a problem when in reality the documentation wasn't there for the library was rapping I thought it'd be a viewing one-way didn't write back in a few hours a lot of these libraries are written in JavaScript they don't have type definitions yet if you're lucky and it has you know some flow type decorations or some type script declaration you can work off of that and it's it's much smoother cuz you know what the guys going to be and so actually that you brought up when you said that you would like say you wanted to wrap just the part of passport that you wanted to use that is a great tip for wrapping things cuz when I first started rapping stuff I was like I guess I'll wrap this whole library and publish it to mpm that's nice to do that is a kind thought for other

  
the probably what you really want to do if you're getting work done is just wrap the part you're going to use like take the existing Library that's very general and has lots of different options and overloaded functions and just make the types for the way you're going to use it and use it that once in your project and then you're good and if you use the Vinings in multiple projects and you're like okay I'm tired of copying and pasting then put in the library Shore but it's it's really you know under 50 lines of code and the next person can just write those lines for their own use case it would it is very nice when there is some standardized library that everybody's able to contribute to cuz then you get type help run you have to understand the library South but a lot of the service that side you're going to service I think I'll run into isn't at that point you will be one of the first people doing it in production and you may be solving bugs with the library or with your understanding at the library so that's that

  
potential cost there so that's what was so that's one option we talked about is using an established library now let's talk about some there is some experimental work happening with like reason native not reason that the wrong way to say it your reason and on top of nodes HTTP tools to be a unique web server that's not expressed one specifically Dimension is an act or nak'd which is very interesting it's kind of like a Scala actor based approach on top of node and it had that exposes a PS4 reason and for just playing JavaScript so this is interesting but the caveat are the warning I'm going to throw in here is that it's this is also very experimental and new so you don't have a community of people that are hardening this and finding the bugs it's very cool work and it's it's awesome from the authors of those were doing it to it to do this work and share it for free but if you are

  
and not interested in the specific benefits that that framework offers like if you don't need the actor model because your current APP is insufficient without it then go with the boring thing and just for example that super cool and extra work in the development as I understand it is pasta right now as they investigate cool other future new possibilities of like Olaf actually maybe write a framework on reasons native kind of think so just be prepared that if you choose something that's bleeding edge it may go away or it may stop so I'd say only use it if it's if that's the only if that's the only place you can find the thing that you really need to make your business work

  
so let's assume so let's assume that you are just going to you're going to use BS Express or you're going to wrap some current nodejs Library what are what are the other thing that I did actually I run time for lovers dependency that reason has which is the reason Zed library or the Buckle strap standard library and it turns out that that is bundled with the compiler as well the BSB Pilar which if if you're trying to do I mean p.m. install it actually will compile that compiler natively on your computer if I'm not mistaken

  
right cuz so you um payments I'll be at 5 exactly right and if you're trying to like if you're trying to deploy to Heroku or anything that runs on a small incense and doesn't npm-install you're going to be in big trouble because it's going to take forever or even in CI you know for example

  
 right right hand and you don't you don't need the compiler you're going to be shipping your compile Javascript file so you just need the curry and things like that you're not using the data structures from the standard Library little things that it requires to even run your compiled code at all so what they're two ways to get around that and one is two bundle your JavaScript I know you you thought you get away from bundling cuz you're on the server side but my package your best friend forever or actually doing the fact that your dad sent in the past and extracting the JavaScript code from BS platform putting in its own package and then doing some fancy code to when you ship swap out vs platform for your GF pop on the only contains the jobs

  
 as you can in your pocket. You can say right cuz you can in your package. You can say yes platform version 3 or you can you can put in GitHub repo and so if you put in this repo that only has a job your files and it's kind of spoofing everything else from BF platform then you'll be able to ship with M and it'll work normally but then of course you don't want that is actually one reason as well why that I still got skills and that is when you run the compiler it places the compiled artifacts for the libraries that you're using inside of the node modules folder and it would be nice if there were some kind of standard that said if you're going to ship a buckle script library to compile artifact should be included in your deployment but there's nothing that enforces that and there are libraries that don't do that so you can't rely on that and the proud the problem with that being that a lot of these deployment count on node modules being something that can be blown away

  
 and rebuilt at deploy time so this is again leading us to bundle because if you don't have it bundled then you ship it to now or whatever and they don't include no modules to keep it smaller than they do their install on then all of your compiled artifacts are gone and your code doesn't run so you then you have to do a compiled step on the deploy which means you do need the compiler which means the at your second I look up again so they're in reality I'm actually in a lot of cases you can bundle it pretty easily sort of there are some exceptions but basically you could just drop webpack in as a very simple webpack config that you can drop in that just says bundle basically you say like bundle everything and then you say exclude everything that's in node modules and also said webpack to node mode which means it won't it won't bundle any of the node in standard Library it won't bundle anything that's in node modules and then what you do is you whitelist

  
 Buckle script code do you say basically here webpack work on my project but don't do anything like bundle nothing and then you whitelist just your the code that you actually do want to bundle which are basically you can just like dropping a red jacket that says anything that's under BS platform or anything that ends in bsjs and it'll bundle those up so that actually works really well that produces a tiny little bundle super easy to deploy then you just the next step you actually move all of those things all of those BS dependencies you actually moving the devil Looney deploy it doesn't it doesn't happen sell any of your back of her stuff and it wouldn't be a few other things then here's the here's the tricky part if you're using a rapper Library like BS Express

  
 if your it is going to include Express as its own dependency and that would normally work except since you're bundling your code now you've actually lifted the dependency from inside the express node module the BS Express node module that was including it now you've lifted that dependency up to be a direct dependency of your project so if you're going to bundle you have to expect that when you run the bundle trying to say I'm missing libraries at and then you'll have to add those libraries that were child dependencies and now they are your first love all your primary

  
 I'm stealing food

  
 could you get around that buy still including all of your reason Library dependencies out of a question said yeah I had tried that they might think that when I move them out I did it reach save-download time on ambulance all but that's a great option just leave him in there yeah I think about that would be great so I have to put out the actual deployment cost I ran into and then and then whenever wherever you're deploying you have to figure out to get you know whatever the process is to make sure that it uses only the production packages or whatever so it doesn't it's all be a spot for the once all that's done you should be in the clear and it should be like a normal life Express app and you can ship it and like only ship your bundle and then it's small and so you can shut the lamp two functions that you can ship it to my Roku or whatever you like so that's the cost for the actual deployment and let's talk about maybe another very common tasks for sure

  
 that's how much is sequel binding to some sequel database right and there are some libraries in reason for building for doing some sequel stuff I found a few that were interfacing with I think my sequel I'm sorry if you're the you're the author of the library then you're like everything but I actually ended up because that's what I'm familiar with from just the note World connects is a really neat sequel Builder is not an orm all it is is it helps you to build sequel queries that are valid and you can do it in a in a way that's all I really need I mean is it set up perfectly for fast typing so you could just take your query build up piece by piece it's really easy to conditionally like for example you can just take your chain that you're building up for your query and you can type it into a switch statements which expression and then you're such a stretching like let's say you're switching on an option you can just say like

  
 if your options there then you add this condition to your sequel query and if it's not there then you do nothing and then your simple curry just what it was so it's that's awesome yeah but with the caveat that connects the only wrapping library that exists for it it's wrapped by because Uncle I think because uncle but he just did it in a very quick like I'm just going to throw this together and he threw it up there and it's very incomplete like the the bones are there but a lot of the things you'll run into or like hey this time signature is just Apostrophe a Sousa parameterize it just says it takes a nap yeah and really it's like this function actually tastes so you don't have to flush that out fill it out and so I've I've actually copied I just vendored his Library into my source code I just copied the whole thing directly and I've been making heavy modifications so there at like I've modified parameter types that modify the return types to match when I was wanting

  
 sad and even made some like design decision changes like my own API kind of on top of it to make it easier I've ended up using like some of the raw statements quite a bit so it's not really a cut-and-dry experience at this point

  
 right right well if you if you want to toss it up into a gist just so if anybody's like I really want that better version of the Kinect bindings and then it slow no responsibilities I'm glad to do that I'll link I'll link and my modified code in the gist. Great idea but do you even then like I've had two on top of that there's kind of an old way of doing things which is just like let it throw an exception you know and like you just assume that everything is going to work and then it doesn't give you the job is replacing things right but the reason way of doing things is a little more explicit so there's actually a much nicer experience that can be formed around the connects idea instead of just wrapping the library

  
 yeah and so I've had to add my life matter going to pop a blister like and reason well when I pull it out then in my fast typing I didn't type it into a Json decoder that matches what I'm looking for and then like if that fails and I put into a something that catches the error logs it out and does something appropriate so that there are it's not just a simple like oh just use that library and I'll be taken care of is if you leave out their handling then you're going to be in pain trying to figure out what happened yet

  
 right right and you lose a lot of the hell out of the ATM

  
 so if anybody is looking for any side project all that great especially thinking about the reason why of yeah how do I make is awesome but you know it'd be even more superhero and way cool I posted a tweet about this if somebody wrote a PPX where you could write Ross equal and get it typed checked like get your sequel statement checked. Correctness and then it would give you typed right output from that's the type of response that would be pretty smooth so I don't know whether wants to do that but that would be like his rights legal statement get type response haha

  
 you although it's almost a trade-off because

  
 you know what's funny is like I started with a bunch of K'Nex and then I got into it the more I was just like just I'm just need the rock string yeah because it was like I need to connect to when I was dynamically modifying queries based on parameters that were passed in and then eventually I was like well I'll just use default values for the he was like paging yeah I haven't done that was an experience

  
 there you go it's the Clarence equals very healing itself you know you're building up a declarative statement and so I think I kind of feel at home with sequel so there's that

  
 okay so so to recap a little bit the the places we're developing a reason node server is interesting is your candy wrapping a lot of things you are going to have to work on deployment so maybe some bundle and maybe some messing with dependencies and then just an example of one of the other things that are interesting is if you're going to write a sequel if you're in beginning to end of the day babe there's no orm that's there for you and frankly if you are that this is a good example if you're interacting with save the Mongoose JavaScript mongodb library it's it's not going to feel reason e you know it's it's going to be very very all these things and so you might feel your you might end up exactly more of a wrap around to other things we want men to but like I've had I wrote my own logging Library cuz I wasn't one that exist

  
 and the logging built-in and reason is pretty bare-bones to be able to say like you're in my log messages and it also depends a time when that happened and also like log levels up or down now you could you could just wrap any of the logging libraries that exist I chose to just do it myself to be a make it more reasoning but you could use Morgan or whatever but also request validation we already mentioned but like that's kind of a big deal I actually haven't done that because framework so graphic you always taking care of all of my schema validation on cool but

  
 but yeah if if you're wrapping Express Express doesn't have you know the validation built-in that you expect from a right and also the other ones like routing and stuff I don't I don't remember if he s Express has like a typesafe router Harkins just Rings like normal expresses but you can definitely do it but it doesn't feel amazing at this point

  
 right I mean this this could be getting a little bit towards the boring where it's like I don't I don't need to boil the ocean and make a type safe router for bath Express I'll just use the string adapter fine I'll check them you know we doing jumps up all the time and then I will have another option 2 is that you just want to write the guts of your code all in JavaScript all of the connecting to the parts that hook up to the library and then just write your handlers and reason that's another option to oh yeah

  
 yeah yeah just call out simple that's how to get a patent that might be a project to approach the last thing I was going to say about watching out for deployment is think about runtime disability good now you got this bundle and I like to chip Source maps with your bundle like when you get an error message on the server is it and also it's going to stay like you through this error at line 59281 column 9833

  
 but yeah right. Even better like I want to go get this is not an issue 50000 so I haven't gotten to that point yet I don't I don't actually I know how what server-side stuff has sores map support but

  
 there are there are there are libraries that you can hook into nodes exception handling and say before you print out a trace amount or the trace back here's my source map so you can get you can make it work people bundled mode without you know any weird compiled languages just because there's nothing better than can be figured out and put in do you remember that if your compiling from two jobs her from something else The Source Maps may or may not be super helpful

  
 that's why I write so what you'll get is the source map of your JavaScript of your BS. JS file in the weather condo that I actually added customized six operators the old Haskell monad operators and I was kind of embarrassed that I was doing it cuz it's not the reason why but the house that's the same and now that's

  
 or with Ruth yeah I mean if if you're working with optional or with results or anything I I totally reach you know I put in a bind I put in a map and we don't yet have nice async-await or or I was like looking over my shoulder what is this what am I less than dollar sign greater than

  
 right I feel like if I'm going to be writing code for other that other people are going to touch I want you know a 29, block at the end of each at the beginning of each file where is a good idea by the way you're the crash course I've actually had put him in a thing called Magic thing called Promise so that it would make more sense that they could just hit the specifically there promise implementations which makes sense before the other one I actually did that the function composition operator you know which is which can be very handy which is for those or losing it's like in Haskell it's all right. And I didn't tell him it's like to write arrows which means that you take one partially applied function but missing one value and you take another one and you see the basically Like Glue them together and so they become instead of from A to B and from B to C if he comes one function for me to see

  
 so it will it will

  
 nicoticket behind I definitely scares a lot of people thought they be like what's a magic bag in the Navy go see and then there's a comment and hopefully there that would help sorry I very much I dressed but that was everything

  
 oh we'll see that we we didn't cover when is it a good time to use reason on the server maybe end on a happy note we went through all these different options like I was looking at girl because it goes super cool that's a very object-oriented and if not I'm not saying that like with spit coming out and saying that because my brain has been working in a functional Paradigm Persona 4 and 1/2 years now that when I I'm trying to write and go code and I'm just like this is hard for my brain to shape back into the shape so with a small number of Engineers on my team and with us doing reason all the time for the front end as well and and having a back in choice we it makes sense for us to pay the cost to do that wrapping because a we've gotten really good at rapping already so that's a really

  
 relatively low cost for us now and be we kind of know the note ecosystem versus learning another package manager versus learning another and like versus Marines back into another. I'm right without you trying to versus functional like we kind of know how everything works just as a language so even though we have to face the challenges of it being Leading Edge wear it more but the faces challenges maybe then we would be to just get comfortable and another ecosystem in such back and forth

  
 yes yeah I just had to I had enough experience trying to ship relapse with straight JavaScript that I am not willing to do that anymore and I know there are wonderful people who are awesome at doing that and I can mend your brain power but I've gotten used to the crotch of having a type system and I think that I'm up to something I like you so yeah

  
 okay so it's so maybe I'll just sum that up if you are especially if you're already using reason on the front end and you love it and all your team loves it and you're like back and we know the note ecosystem and we don't want to use straight JavaScript or typescript for flow yeah there's a mental impedance between reason and types types to some degree because they look similar cuz they're both kind of see if syntax and so there is some overhead between if you said I'm doing typescript on the server and reason on the front end it in might still be difficult to get your brain back and forth between that

  
 it is one language every yeah there's there's a lot of rules Lane all the checks one language plus I hate sharing and then it's like we might actually be real thing you can share utility functions in our case I'm going to wave my hands cuz we haven't actually implemented this yet but there's a bunch of code that we've done for handling encryption and decryption of content which can be pretty complex and gnarly and if we've done our code right then we can just Implement an interface essentially or module that does the encryption we need on node and then on the browser and then the rest of the code can kind of share that so that's still an ideal but that that's the case were that we really need because we do need to be writing and reading or writing encryption on both clean and the server so there are some winds there

  
 okay so code-sharing is is maybe a little bit further down the road possibly somewhere in mind sharing is just so valuable I mean it's it's react yeah idea of learn once right anywhere learn reason why Nelly and so that's a lot of documentation is kind of a big help so once again if you're not doing fancy server stuff and all you're doing is like that users management API because your app needs user management probably it's better to like install rails and use the passport gym and just since you only going to touch the code like once every few months just read the docs when you need to kind of thing you know

  
 yeah right

  
 or use Firebase right I mean there are there databases that are sufficiently complex but those are big reasons to use language and another thing showing node is easy relative to deploying most of the things goes gotten to the point where you can like go for the vine area right and you can also do Lambda functions and go but like elixir

  
 are there bunch of platforms when you can just ship Elixir and like we have a job at Apple's call app that it's that's not the vi riendas like now deployed around the flying other languages but a lot of people that focus on making node very easy

  
 cool so yeah be back in on that yes thanks for keeping me updated that is working on a project called reasonable and this is inspired by the talk that Ryan Ryan's all that right

  
 yes then I know where do you know where were you guys gave it talk at a conference recently boy I should look this up in that talk she talked about like the mistakes that he had made with no doubt and how he would do it differently and then he said actually I have done it differently here's a piece of crap implementation with some of my ideas don't use it please please don't use it but here it is and basically what it is is typescript interpreter that isn't node that runs that integrates with V8 and doesn't have a standard library but has some different rules around at the note has about Imports and it runs typescript directly so there's no compiling Java scripts that's not a thing

  
 we're right

  
 so where were node is V-8 is running or JavaScript but we have native cplusplus implemented runtime things syscalls essentially that V8 is going to call out to to do if I lose my cousin all the stuff his new project is V-8 is talking to go and using using scene at the note guys project so that's also faded much like idea of it too so both of these are like we have this V8 Vining to go thing and feed his project is that reason runs directly is a reason interpreter there's the ideas I think it would have access to go standard Library as well just like an extra-point so that's that is pretty exciting

  
 so that'll be considering how long note came it how long it took Noah to be something that was usable in production hell yeah I'm guessing it's going to be another few years before that it can be actually used but that's it really need ideas Crossing up

  
 yeah yeah it's a cool so I'll take one Rebel it Rebel. I t is a a really cool they have a code sandbox kind of a thing you can they have an edger it it started out as just a rebel for different languages there's python there's Ruby there's JavaScript there's Java all these things and so you can you can write your call you can buy you ate it and so it's it's similar to a bunch of like these things but instead of just JavaScript it has python a job and only thing and they recently added reason support so we can react and the coolest part of it is they have the server with Merlin so you have all of the fancy auto-completion you have tight ends it is really well implemented I think you just start writing the buffet is now at least rapping

  
 Lego Rebel it

  
 haha yeah and I guess I'll also plug I am working on a new vehicle plug-in and a language server to go along with it it's written entirely and reason the current gift code plug-in in Langley server has have a lot of Gaucho in Flint in front of Merlin but my thing is is loaded leaner runs need to be on Windows without any issue has already made a big deal that's awesome and cross-platform that's way to go do it thank you to keep your eye on that or you can actually go try it right now if you have years ago

  
 yeah yeah there is an alpha available again Windows Mac when there's a vehicle download the thing that I wanted was to just have a single install you don't have to do so you download the plug in and it works you don't have to do the reason CLI Global insulation so that you got it I'll take an article that I wrote about the playing reason to AWS and I wrote it I was specifically looking at elastic-beanstalk at the time I think I'm going to be taking a different route than that but so I I may actually extract part of this article and just have it be at generalize like how to bundle your reason code for deployment but in the meantime go and look in the show notes if you're interested in doing this there's an entire article about how to get your reason apps deployed bundled and shipped to elastic Beanstalk on AWS

  
 yes yeah hopefully you can find my web pack and take there and things like that

  
 I did that's all I have awesome thanks everybody

  
 okay thanks

  
 bye