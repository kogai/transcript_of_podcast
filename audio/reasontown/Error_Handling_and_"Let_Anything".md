  
hello everybody and welcome to reason Town episode 12 today we're going to talk about some error handling or going to talk about letting anything it doesn't make sense but it will later and I'm here with Jared don't say hi Jared hello Forsyth correct name of your last name today we are sponsored by Tyler McGinnis. Com Tyler bananas.com provides are hosting for us and Thailand me going to suck on this delivery in the linear course based approach to learning web Technologies Tyler again is a fantastic guy and he does some good stuff so please go check that out if you want to learn more about react JavaScript the web Technologies in general also sponsored by my company day one we make a journal and I think you like it if you look at it and I like it a lot I use it all the time at work and home for my own stuff and Jared you work for Khan Academy you want to put in a plug for Khan Academy at all

  
socon Academy free world class education for anyone anywhere is the goal that's like the best tagline you can have as a company get stuff so yeah if if you want to learn things in a week We've Got High School contact but also have some college-level like I'm I'm trying to learn macroeconomics cuz I never took any kind of class so I say more than some I mention this in the show before but Khan Academy basically got me through college so if you if you're in college and you haven't started looking at Khan Academy you might get better grades if you do take check that out and yeah I'm going to excuse my voice and my nose cuz I just got a little cold I know it's gross to listen to someone who has a stuffy nose is talking on the phone I'm sorry for that but we've got some fun stuff to talk about today what are you to kick us off. So since we last talked

  
the state of Reason survey finished just under 400 faunce's 398 answer again so lots of thank you if you responded we're still going through all the information but one wanted that I thought was interesting and kind of indicates a little bit about the state of the community of the people that use reason

  
47% said that they have helped somebody else learn reason that's a pretty high teacher rate so still very much in the phase of you know people are evangelists if they're using it because it's pretty bleeding edge and makes sense but we will be crunching the numbers doing analysis and coming up with lock post hopefully hopefully within the next month or two

  
so that'll be interesting to see what what actually comes out of that I mean that there's a lot of work to kind of go through the free-form response especially right most interested are kind of slicing the responses by other other things that we collected right so for the people that are you don't have been using reason for Less Than 3 months worth of the pain Point versus people have been using it for over a year and you know of of the people that are coming from typescript what are the features of a must want versus people to come smoke a bowl or you know it's funny because the syntax is designed to be for JavaScript friendly but I think that was the single biggest hurdle for me when I first started was like I can spend the first couple weeks just like hammering my head against the syntax especially external right so that I mean maybe it's because it was so strict with certain things and there's there's a whole lot more to

  
syntax and reason than there is in say for example a very small language but a lot less than you find in something like Scott left for example so did you get a lot more flexibility language-wise than you do with them so if you're just learning and wondering why you can't understand that send text yet it's not right it it doesn't help that the syntax errors are super unhelpful muscle without any cryptic look at the place where there is and be like all right why is why am I down here before you spend you know half an hour in your head against it jump on Discord to ask somebody probably people that are happy to help you out definitely yeah so that's that's a recent survey stay tuned for more

  
and you don't talk about the editors that's kind of interesting oh yeah this was fascinating so what was it 65% of the respondents use vs code makes sense so definitely the the top but in second place was them not Adam not Adam. I was way down there unexpected was was 3rd but that only like 10% where is them had 14% it's pretty interesting either even if language server or is this okay I was wondering if this was like Rob Pike people who are just like zero syntax-highlighting 0 cups of Fort Jordan walk uses them and so he's make sure that you know there's if there's support for an awesome that's great I haven't used Rob them in the terminal for a few years when I say you've been buying things all the time and in our new redditors but

  
I don't know you know there's something to be said for sticking to straight up them in the terminal at T-Maxx there's a lot of power to be had there if you do it right but there's also thousands of hours to be spent on your them to bed and you're right I still like just just today I fired up them in the embedded terminal then vs code to just like there was a file that wasn't within my workspace that I would just wanted to do a quick edit that's my primary use of them anywhere I'm not going to like pop up with my realtor of it and I'm servers of course I'm grateful them as their glad it exist

  
alright so let's talk a little bit about our favorite topic over the last like 3 episodes reason on the server what's the latest a long way from the first episode when we talked about this where we said don't do it and in fact doing it heavily up to my ears now and I have come to the conclusion that I like it I think it's a it's a nice place to be there are some pain points though and let me talk to you a few of them and see if you have good advice for me if the community has good advice for me or if we can help clear this up for some other people selling JavaScript if you're riding a Express server the the way you do error-handling is kind of like a

  
I wouldn't say Let It fail but like you've you typically work with promises you will either let a promise failure propagate up to the very top level which will fail do a 500 in your response or you got your promises along the way and you can take the exception that you receive and print out call stack and you end up with a nice call Sac that tells you owe this area came from this file at this line and it says that so that's pretty easy to debug and sometimes not as easy when it's like undefined has no property for you you know where is that right one of these days I mean the the job that I find most vexing now that we have you know a sink support increase Max bet before we had that any you think we're just a hot mess but these days the the most difficult thing is

  
I bet there's a value that is inexplicably undefined and it's been passed through you know for several call site so I do know I have to just start spewing out console. Long and likely we don't get that much anymore with reason right because it's got explicit optional unless you've accidentally you unless you've made some mistake reception at your borders of the you don't know if you haven't what is directly inside your coated object. Magic which is a thing that's kind of the air handling idea and JavaScript if you're coming from JavaScript which I have been you would kind of expect a similar thing since were based on top of JavaScript but reason is Bill to use OK Google exceptions of Scrubs does the translation sort of the volcano eruptions ish and you'll find that if you instantiate or if you make it okay I'm only exception

  
print it out to the console will you get is the name of you get an array of two things the name of the exception and then some magic number and I don't know what it means I feel like if you make an exception that's called like request to bigger or something like that and you printed out and you'll see in the console in a ray that has request to Big Air, 8 or something and then run number seven that number is is redundant in that case the number is the liquid in um and if you're familiar so you know if if you're making a sum type with with several Constructors the runtime representation will have an integer for each one of them the first one to find is zero or one I forget whether it's one in next and then the next one Zoo Tycoon 3. What

  
went when you switch on something the Joshua that turns into is check the tag if it's one then go here at the student apparently that makes sense and so with the exceptions exceptions all all have in each exception type has a unique ID integer and that is what thing printed out along with the name it's it's nice of the names L. Too so I ran to the nasty by the other day involving that number time and I don't have the answer for it still but what happened was I was trying to switch I was trying to handle an exceptional job Jason decoding exception so I did a switch and I did the value and then on the next Line-X in like you would need match on option and I deconstructed Jason. To code. Dakota are I've done this before in this specific case it was never hitting that branch and I went into the actual JavaScript code and I devoured it runtime

  
I did a debugger at runtime and I actually was getting a Json Dakota exception but the number for my specific circumstance was different from the number that gets signed inside the library and somehow I got the different instance of the Jason Dakota instructor and it wasn't matching in the construction. That's which branch and I didn't know what to do so I just feel like a burden on your path so that I think that is npm come to bite you thanks in p.m. where you know in and JavaScript node modules you're allowed to have multiple copies of same library and if you've done things with react and had ever had multiple copies of react in your project in it is it the same kind of idea so I imagine there may be two copies of if you're using Library them at library or maybe two copies of the F platform.

  
scary sure and compiler just cease to ml files and this one is no exception this one find the different no exception of the global namespace we have a collision now or if you if I made a library called Jason Dakota in my own source would that just override the library like is it is it last initializer wins module wise

  
 bucklescript really should yell at you I think it does I've never had a yummy before yet

  
 yeah if if you have multiple copies of the same or if you have multiple models of the same name I give you to find module called out I think it just gets mad when you try to use stuff from belt that doesn't exist that's true maybe it is the last one to find that says watch out for that then if you're using as I could Collide or if you have the chance have multiple copies maybe you're going to end up with collisions right now it seems like it seems like there should be Santa checking on that pretty weird that I would have my switch come from when library and the source of the air come from another one but I mean that that would definitely make sense right okay so I'm getting a little no weeds because what I want to treat as like the overall are handling approach running so my problem here is that I'm developing this whole server something we can I get a 500 you know that something would I throw an exception somewhere in the server shorthand

  
 I would get this error that says like like maybe I made my own exception this is like Dracula request failed right thanks one of my 500 graphql request failed I have no idea which one and you don't get it right back I know Trace back there's no file where you know like oh this thing called the graphql thing that right so 500 was an exaggeration so this is driving me crazy cuz it was really hard to keep bugs off so I went and read a bunch of things and there is like JS exception but there is basically on the reasons that they give you two options there like you can use your ass exception if you want to but I like the way the idiomatic reason ways to use results and and like handle your things when they fail that's great but I actually really do like the idea probably getting errors you know it

  
 cats that like being able to throw write shorthand have their request fail with a 500 and then get that that log and have that have the Middle where handle it say okay I see that there is something thrown in a lot of the trace back and I'm going to give a 500 that's kind of like the accepted way to do I don't know if that's right that's that's what I was used to so so what I ended up doing I think of another kind of doing weird hybrid but I was like okay what is it that I need is like a factory system I try to use the built-in sacks races and you can like what I try to do is make a library where if they were a failure it would actually instantiated JavaScript like the JavaScript error which would give me a stack trace and then I'd like chop off the first couple of lines which was my you know the library that generated sex races sure that was okay

  
 was an amazing now I'm so what I ended up doing was implementing a whole new type called future which is a an unfailable promise so it's a nested promise with results in it future is a promise with a result inside and a fixed error type so so basically if you end up with some kind of like promise where you have like promise of user for example you have a future of user butt in the air type you have basically like an accumulated string of events that have happened on the way up to this user if that makes sense then instead of a call back I get bread crumbs that makes sense but it is interesting because when I get a failure like in 500 I actually can go through and follow along the whole path that this future took until it got to the place where I failed

  
 more than I've wanted cost a stack Trace because I don't want that beat because of fact race is what are

  
 what are the places that that would happen after this exception if that makes sense so it is this function would return to this call site which would return to the stall side so it it's kind of the panda future as opposed to how did I get here what what happened in the past and those can be different in important ways where it's like you know I I got this on to find Value from these three function calls that succeeded but they're no longer to call Sac because it went in and it came out right even going to find and now I'm here yes so what I got into what I have now is like literally a strained concatenated with double colons or he'll say something like indicated user so I can go get your medication middleware and every time I instantiate a future or convert a promise to a future I made it to the have to include a line describing what was happening at strength so it's like if you say if you have a promise and you say to Future which kinds of promises

  
 it takes the string and when when the promise fails it'll stick that breadcrumb in there so you can you get this line is like authenticated the user fetching the user from such-and-such a saurus and then like and then like decoding user so you get those three things and then you get you see this D quarter error right so you get an actual okay I'm Only Exception says deep and any accompanying

  
 exception info with it then you also get this bread crumbs so that made it a lot easier for me to see what was actually feeling cuz I can see it was going through in like putting these now I also in the making my exceptions richer as well sometimes when I threw I would know kind of exactly where that happen so I'm not so sure how totally practical the the the trails of vignette Park and that's partially because I also do a lot of mapping and flat mapping over future sure and when I do that I just add on the trail map for flat map so you'll see like the best of this map map map map map map map map and then some other string so maybe I just need to be more verbose in it to be like super cool and useful but it's an interesting start and Implement I mean it took me a number of hours to print it but it's it's been useful up till now

  
 in instead of having bread crumb bread crumbs of human specified strings you could just stick the the stack trace of where that to to Future was called by creating did the screening job to fix exception in the to promise function and then hanging last night race in case the promise fails it probably a little bit more overhead but then then you'd know exactly what map was called you know where was it yeah that's a good point that's really interesting or even

  
 there's an interesting

  
 Global variable define beaches underscore underscore Lok

  
 what you don't have to do that that actually inserts right though the line and the filename that compile time and JavaScript yeah

  
 the alien go to the compile JavaScript stop. The reason stuff the problem is like I always want to I always want to be able to say like in vocal function and then have that function called Lok for the place where was invoked right but it only works for the actually inserting that token so it would be a pain because every time you call that you'd have to do on a garage door look PDX to resolve it but I'm trying to not get into writing PPX is cuz I feel like I'd spend a lot of pseudo call stack but more like bread crumbs style air handling and implementing my own thing which are called Futures now my whole project uses most of my project uses Futures instead of promises missed at the boundaries I'll do anything that Returns the promise and then I'll turn into a future that's turned out pretty well but I am curious to know from other people

  
 how would you solve this problem I mean how and you Jared like if you just just use promises for the results and like you're maybe you're you're in point would Target have an air handling middleware that just always take our results and if you get a failure result in you you know give a 500 but then how would you have a stack trace the side where I failed her it would you just sure another approaches to just every time you have a possible failure make a super specific are to that place so that you're never having like generic graphql are right so to clarify I feel like that there are several different questions in here one of them is

  
 how do we deal with the fact that Joe Camel exceptions don't give us the stock price that we know where it failed and it kind of seems like it would be nice if bucklescript just out of the sack dress like a normal and I imagine this was knowing knowing Bob and knowing the the Buckle script Mantra Imagine This was done in the name of performance and efficiency where it's like there's extra overhead to allocating an error and get this actress alphabet but

  
 you know mate maybe you could maybe you could turn it off for

  
 I don't know like that the core the the belt functions or whatever but then it all user code has this turned on my default and you can suppress it with that or something cuz it it certainly is jarring when you're like oh and ever happened why do I not know where it came from. Yeah and yeah so and then another part of the question I think what you let out with was what's what's the philosopher had him write exceptions or results and it's clear in Elm because there are no exception only results and it's clear in JavaScript cuz they're only exception so what are you doing you have off yeah I like I like Russ approach to help teach me a wise restoration there a lot of things

  
 I'm working in reason why I'm like oh rest his rest of thought about this that you know the really smart people behind rest have been working on this for a while and they come up with an elegant solution so in rush you can throw exception that you can't catch them

  
 it's called a panic okay and it's basically saying if you want to cross the program you are allowed to but you can't use exceptions for handling things that are not truly exceptional truly unexpected only for panic crash exit code my server is exiting all requested boarded to have some of the fast and loose I don't want to I don't want to put that ring through but then when you get down to it it's like it it it nudges you toward the more principle trailer you should be dealing it if if this is like a this will probably happen

  
 then you should handle it as opposed to Pancake okay and so I like that philosophy and we're going to talk about let anything later and that helps a lot with the the plumbing of things through we're normally using the results as kind of a hassle could you got to do a switch everywhere but this Allison text Sugar can help with that or or you got it just always happen you don't always have to switch necessarily say that were in the circumstance where we're like four or five levels of deep and we're going to fetch a thing and decode it and instead of letting the decode raisin exception like I'm doing right now what if we just changed like we're at the chase on Dakota library towels return results right and then we always get a result of X well then

  
 probably am not going to actually handle that results until much higher up because in a lot of these cases I can't continue if the result is a failure right sure and if it's a if it's a thing where

  
 you know truly you want to 500 I think exceptions are probably reasonable I want to go back to the top level of my app doesn't happen a lot and react apps in front of the sky right because you aren't you off and want to handle and be nice and say like okay well if there if the user doesn't exist I'll show him this nice dialog box it says you're not logged in there whatever but on the server in the context of a single request you often just say like you have one thing to do and if you don't have that piece of information you can't do your thing that's why you say I'm out 500 you know

  
 it does so I I definitely biased toward using results

  
 just about everywhere because it feel so much safer if if my my Mantra is pretty much never thrown exception I don't have to worry about not having caught it okay that you still do have to worry about the other problem which was where did I fail my results right where did my result failure come from and so you get you get a j Sunday code failure and where did you handle that especially this is a nice actually transition into let anything under decent a second but if you're doing if using let anything then you're not switching you're just saying all I'm in my contacts in my results I'm going to let results and then you know like two or three functions up since they all are turning results then you end up with a failure and you don't know why you don't know that its function x 2 levels down that was decoding that failed cuz you just get a recording failure you like but okay which decoding you know failure

  
 I I try to also be principal there and then transformed the air at places that make sense right so I call this thing that will return the result and this function has five or six different things that will return results or basically if I'm in a bunch of Santa and I know that there are several different places that will return the same error essentially sucks that it wouldn't be clear then I'll Transform the error when I get it I'm using a try block with with the the try part of let anything and then I can say you know I'll give a more clear error message for this just saying

  
 so the try the try the interesting cuz that's like

  
 is that math errors that before we before we continue I let stop. Explain the library dig deeper into it you're the author I'll try cleaning it and you can tell me that doesn't make sense so let anything is me and promoting a so I am in Portal quest to reason that was adding some async-await sugar that would work for more than just promises but also results and options and a bunch of different use cases where you want to avoid nesting and things like that and there was much discussion on it and back and forth you know what's the best way to do it if I can use the land of the library then I can test it out

  
 most people get acid out and kind of gain more confidence that this makes sense as I think I exchange cuz you know it's a big thing to change the syntax let's become so what it looks like is you it it feels kind of like async-await where if you

  
 say you want to make a variable that is the result of a promise then you can Duel at percent a sink

  
 person equals person promise and then it will

  
 and then you can write the rest of your code as though it happens synchronously night so it's it's the same kind of idea as with a single bite where you you write the code sequentially and it will happen asynchronously because it transforms going to do callbacks tile under the covers and if it's basically the same thing and was also inspired by a sharp which has an async-await like thing but basically it allows you to not only say I want to let x equals the result of this promised you can also say let x equal the value of this optional

  
 if it's there if it's not there then it's it's almost like an earlier turn we're like basically the result of this block will be a nun which is something that you really really want when you are when you have a you know a bunch of different things that are optional if you're doing parsing or you're like hear all these different things that might that might be no and I only want to continue with all of them are there if it really cleaned up and yeah it's great and for those who are curious this is tapping into the monad design pattern from Haskell in for functional programming where you have some container the whole to value and you're able to tap into that container and there you know the fat Mac function is going to tap into that container run a function on the value of the container and return another container and flatten it down so there's only one level of containers that's flat map

  
 also called bind and this concept they were talking about with a single weight or the coat flattening is also available and languages like Haskell called do notation or languages like Scala with therefore comprehensions like this is a pretty common pattern the catch with your not the cats but the way your PPX Works which is I love I love that it's actually just a cut transformation like you can reason through what's happening because you know that when you make this let percent a sink equals thing that return the promise you know that everything after that is just going to call back that's just how it works and that one part that didn't get explained that you were probably heading towards that probably cut you off was you implement your own module so when you said let percent a sink that's not special let percent AC looks for a model called a sink in the scope of your project and inside of that model called a sink there needs to be a function.

  
 find with a certain signature actually not a certain signature just a certain name x equals y transforms literally into a sink. Let underscore why,

  
 X as a function argument arrow and then the rest of the body so anything that takes a call back is going to work with this like anything that can be changed changed into a thing that

  
 takes a value in return and has a function that's called so I have an implementation that that works with with let anything that just uses notes I'll call backs so I don't need to wrap anything and I promise it's just this is a function that expect a call back at the end and it all works so it just so happens as well that since so many of us use promises this works really well for promises and her mapping over promises that also works really well for anything else that's kind of monadic and follows the Monet pattern which is option is one of them result is another one of them their whole lot of data structures a list list is another one of them there's a lot of them flat map over and it's so it's just trivially easy to make a module that defines let underscore like it's just so fat in fact in many cases of you like if you did want to use let

  
 anything and let's say you wanted to hold on I'm going to

  
 yeah so like let's say you wanted to have a list list get a little bit crazy here because it starts doing multiple executions for items in the code but it's kind of cool thing about so if you did let percent

  
 list right and you have to find your own modulus like let percent let list it's getting confusing to explain on the radio but you have your own module that's not that's not clashing with Alyssa module right but let's see you see like what president let list equals and then you pass in a list of things to it then everything in the code that comes after that line would be called with it would be called for each item in the list if you implemented that way it's like if you did and if you did that then list map the implementation there is just list. Map I'm sorry let list your modules any of these things you can Implement let anything by just saying oh I like option let's hear one of these option than all I do is say like a mine is called opt I usually just like shorten the things I say like

  
 what percent Ops equals an option and the implementation of that is literally just like belt that option. Map or actually if you're excited about my monat so you can definitely go go down a pretty private whole the I I like how or II design let anything to be kind of a sweet spot of

  
 how difficult it is to Define new things I'm cuz you can you can kind of go a little bit wild with your transform such that it really makes it harder to read and so I said there were other day that there were other proposals on in in the the threat on the floor press they were like well we should make a lot easier what if what if you could just reference any function what if you like it's annoying to make a new module and I explored that a little bit other people explored it and turns out if you start calling it was just random functions then like your whole your expectations about the execution order of your code just goes out the window and you have spent a lot of time like wait so what what is this function do so really I think the The Sweet Spot is only use it for a couple of well-known things I kind of discouraged using it for list comprehensions I think that

  
 will break to me people's assumptions about what code doesn't look that up I've seen this comprehensions in action and for me they're kind of like questionably useful because they really make you been through way that you're I think if you use it for promises use it for results and options and maybe that's it maybe there maybe there's some other I'm sure your future thing which is basically a promise but better wood works well but before you reach for this you want to think real hard about is there a very obvious thing that will happen that most people living in this will be like oh yeah I understand what this is doing if not then just write the extra switch statement or whatever the basically like the guideline would be if you have an abstraction that like holds its value like 1 value than maybe that's going to be the best way to move forward

  
 especially if it looks like async-await where a lot of people have experience at that already exactly

  
 good introduction that we were actually going to talk about the air handling though the map ever part of that because there's more that you can do more than just let dry you can do try as well yeah but those are the two things cuz I tried using it with just let and and some other people as well and they came back and said well actually Murphy you were one of the people that said wait how do I how do I catch you no reception in this promise and my answer at the time was well you just there's there's no special tonight for that you just do a promise. Catch and you you have to use it that way I like normal and it works and it turns out it wasn't too much more work and I don't think too much more attraction to allow you to do a try which

  
 he has a try catch block and just to annotate the try as well with the same a sink or result or option such that actually option would make any sense because option doesn't have an error taste so you wouldn't really be right in Flint that in a way that people would expect I like result result is is easy and so try percent result my function call catch and then eat you just catch block and you can you make silly map on the errors that will be on the result side so I am trying to remember the example you have on the report right now I read it a number of times and it was I had a hard time kind of like understanding

  
 a actually human talk to you about it to understanding exactly what do you use case should be because there's there's like recover from an error and then there is map are right the result I think it may be with the thing that you had done was I can't remember if it was an option it might have been an option example which is maybe why it was confusing so with the tri percent module in the in the air handling part you're allowed to return an okay or an error right so so it is it is the fanatic find on air

  
 side effects in that case is it it's basically if you're doing it with result it's not so much map are as recover right because you you're given a failure like you're given an exception and then you're allowed to return a new exception if you just want to transform it into a different exception or you can return the default case I see I see so so this is so try as actually handling an exception not a failure right

  
 it is so so so you like let's say you do let percent result results and then you pass in a block what are you going to be matching on your not going to match you on the result Constructors right on the contents of the error side Lu will yes if you have a a result and the value side is a string and they are side is it is an Ant Strip in what your matching on are the different integers and then you can return a new error and you can't you go to turn an error that is of a different kind if you want to be string and this is say in the case where you call a function that does graph do all things returns a result that either has your object or a string that just kind of maybe it's about to kill error and but the function that you're in

  
 more structured maybe you've got you know in the air type with with a couple of Darkness truckers you can you know say error and then the Constructor with the contents of the graphical error or something that makes a lot of sense so I could have my Json decode library that raps the other day Sunday code and when I do it it actually returns a results of either the thing or an exception like or as Jason decode are right and then in that case I could I could use the light comprehension on the result and I could get out

  
 the air and that's why you're saying I could transform the result and so instead of saying like oh just Jason decoder I could I could log if I wanted to for one thing I could do a side effect log but I could just say I failed because I couldn't because the user while trying to update their password is a bunch of different useful constructs that come out of the the let anything send text because you can you can do early returns like kind of card statements you that you can transform errors in the default cases to transform the the result the value there's there's a lot of different stuff

  
 a lot of cool stuff so I think I get that a lot better now that makes that makes a lot more sense try I wasn't even that very much but now I think that I think that could be a really

  
 sensible answer to my air handling question as well cuz a lot of cases right now it's just like Let It fail sorry you know 5% module transforms into you know a sink. Try underscore in the same kind of fashion except it will the expectation is that the phone you call the function on the error value as opposed to the the happy value

  
 yeah makes sense I am so it's it's trying to be a very thin layer so that there's there's really not much magic maybe there's some thinking through when you're like oh what how do I Implement Boo the try and record let underscore but once you've done that there's it doesn't take too much jumping jacks to to figure out okay what's happening here it would you you would only you would you match on you would match on the result you would only imagine the failure case that's right so you would you mask on the contents of the failure case yes I see so you would not like you said I'm sorry I was out of the set behind you wouldn't match on like error integer you would match on just integers piggybacking on on a current reason contract where that that gives you this this matching thing for free and so the the most comfortable

  
 looking way is if your error is a type that has very Constructors if your air is just a string then you're probably not going to match on the intervals on individual strings you'll just do you know pipe exception name and then transform it into something else makes a lot of sense or if it's if it's a promise are then it's just as well alright well I learned a lot I'm going to change some of the way of my code Works cuz I think that'll help a lot I think that being able to specifically handle certain errors easily in place it makes a lot of sense and I am thinking about some of the extra typing that goes into that like literally hitting the keys but then I think about the poor go people who just all his righty the supervisors are handling and they're happy you know so I can be happy as well

  
 now that we've gotten a little deep and talk her into close your ears monad Transformers the future you'll promise with a result inside of it and you want to handle both at the same time yeah or let's even let's let's simplify that a little bit and go with the case of a promise with an option in it cuz it happens oh okay that's right you're like trying to fetch a user and the user may or may not exist and say you want to work with the fact that there is a promise that you want a map of work it's going to happen in the future and this option that you want to meet up over and say like only continue on forward if this user exists sure so your code without without the let stuff would be like okay go ahead and sit down. Let anything if you're just using let anything on promises that you would say let promise and unwrap you value the promise when you get this maybe user and then you do the switch and you say switch Maybe

  
 Missouri CaseNet unblock a sunblock maybe that's fine but maybe it's not just the user maybe you also want to like get the users real name and that's an optional and so you end up with like future are you get promised option option or even worse let's say you get

  
 will you get the user and then you want to go get their friend their friend list and maybe I don't have any friends right see you in that was promised option promise option so in other languages like Haskell when you using do notation passcode very much geared toward abstraction and generic of traction light and traction first where you say here's a monad every all of my data structures and all of my tools in libraries you go ahead and Implement monat if you're going to offer that kind of behavior and so-so in Haskell you have like I owe which it that's a that's a library that they to type in points monad and you have maybe I don't know if it's called that but you end up with his they need a new abstraction to handle the combination of two monads so they so if not just easy and it's not as easy as saying like oh well you know

  
 if the option is a nun in your head and fail my promise like that's it that's it seems easy cuz that's what you would you would just want that right but I'm in Haskell you'd have to say like oh like lift I L I didn't you have to get more specific but if if you go and read the Haskell book like the the chapter on Moana Transformers will just melt your ears and your brain and in your eyes I got try it and it was it was so hard but basically what you want is just to say if in this case where I can't continue forward like if the user doesn't exist I'm going with nothing right if the user's friends don't exist this specific task what I'm going for is going to also be a nothing like in the case where I'm like three or four levels deep and if any of these fail I'm going to end up with nothing which happens sometimes and it can't the coating it really gnarly then what you can do is say

  
 make a new module called like promise I stopped and just implement the combination of a promise and an option or collapsing the option almost yes and it's over by hand you're doing a combination and so you're not you don't need monat Transformers anymore you just need a new you just need a new let function that handles an option within a promise and then if you end up with like promise option promise option then you might need to handle an option within a promise that you might need like, soft and you also might need a promise you might need to switch those off depending so if you like or if you like in it maybe not I haven't thought that through very well you might actually only need promise and promise opt because that's probably the best probably actually the case because you can collapse your promises and you can Clapton often do I promise cuz what you would end up with in this case is you would say like you to wait the promise and then you would say

  
 well these are not there the news fail a promise and then you go in at like let's say the user is there okay well that's great then you do this other promise that promise fails then you feel department and then you like three levels in an you like okay well they're friends don't exist so then you fail the promised end it all collapses down in the one nice thing could you combine at the other way cuz you have the option b the outside layer and the promise me the inside layer I don't think you did because I mean if you have code such that you were like I might have a promise yeah right and I want to get the value of the promise if I have it

  
 then then you would do it the opposite way as opposed to it but it might not be the example that you gave of I want to get

  
 I have a promise that might have a value and I want to get the value of the result of the promise if it's there that's way more common you would run into a promising right now so one of the other things this isn't going to work very well over audio but you can even avoid that level of abstraction using blocks where you and basically if you're going from one kind of Promise one kind of monad to another kind of monad I mean you're like okay at the top of my function I've got all these promises and then I'm going to deal with option for a while you can just add a set of curly braces and do your laptop. Inside there and then the result of that color braces will the Opera

  
 you can switch on that now that's that's good to hear I like that that that is great for one I swear it's like I don't I don't want to make another module to handle this specific combination right but I do want you know I'm doing this enough times that I want to be able to have that I sent a text like that that would be useful if you're like you said you doing a bunch of promises and then you a bunch of right in the case where you're doing promise I promise I promise. You probably want to do that combination module which makes sense and so just to make just to make the donuts make a little bit since we dropped in Goldilocks abstraction I think it's what we called it that's right and the thought there is like you can go very far with abstraction to the point where you want to be generic to handle everything I haven't found in my experience that that's often super useful at my level of programming I'm not a language designer

  
 at my level of programming where I'm just getting things done usually for me it's like the Goldilocks attraction where I'm like I don't want to type all the code out I do want to use abstractions but I don't necessarily need my attraction to be near enough to handle every case and that's something that when I ended up being the future library that was kind of a goldilock extraction for me because I did Sir John Reid X on the next package repo in there a number of Promise Alternatives and they strive to be very generic where you can have you know or like your dear future value can contain anything in the failure value can contain anything and then like it gets pretty complex and I was like well you know what my failure values always going to be the same

  
 this is what it is and my so then I can simplify this because I'm always like and I'm not like I'm going to always handle promises graffam is Future's in my failure is always going to be the same as a bite by Goldilocks in the abstraction I simplify my code because I said I just got out other possibilities and said it's abstract enough to handle different values in the prayer in the value side and that's enough for me yeah I'm I'm totally with you on that I I feel like that the times when I have gone gotten really said about an ex and abstraction first of all I was wrong like it was the wrong abstraction like it got in the way or you know I built at all this functionality that never got used to like in

  
 in the Khan Academy IOS app are number one source of bugs is a overly exuberance like layout-manager thing that allows you to have that debt the tries to handle any number of rows on the homes on the on the main screen in any order and all these things and there so many crashes that have come from it when it's just like we could there were only three things and it always have the same or just like let's just so yeah

  
 so big D Goldilocks it straps traction that's right unless your language designer and then you can you know go into your hammock and think for a long time and maybe come up with the right one legged haven't driven development we got a lot of stuff question about coaching but they will have to wait till next time I'll yeah and I also wanted to add contacts to sew on the on the topic of server host server stuff again I talked in previous shows about having to bundle your coat up a bunch of other huge pain and then I was like oh maybe elastic Beanstalk made a better cuz I'll just see you see I had to build stuff and I ended up using Docker hosting where I just build the docker container I don't really care that the okay I'm like cuticles in there because when I deploy that only gets pulled ones and then it's cash so it's not that big of a deal for me I'm on the shipping my new layers when I deploy in the future so I ended up using the service called convox which is recommended to me by

  
 Twitter and they're they're basically infrastructure that sits on top of your current AWS account and you can use it for free then a free tier and you just pay for the AWS hardware and they'll basically stand up like a container host for you on a variable number of boxes and do their best to make your the most of your money as well like they'll they'll scale your cluster to basically make a cluster and then you should Docker Docker containers to it and manage all that stuff for you it's it not as involved as a kubernetes you don't have to understand the ins-and-outs of kubernetes and but they lot of scale the cluster as needs to be and they'll even use spot instances was cheaper I didn't know if spot instances are at AWS is like this this box is unused but it could go away so there's

  
 the Jeep because it we might pull it out from underneath you but the way this service is built at the cluster so we don't care like if it if it's gone will just add another right yeah so I can you spot instances and then so your Apple Auto scale and the cluster will Auto scale to meet the needs of your app so that won't pretty sweet and it's worked pretty well I like it and I was able to ship my app with minimal pain compared with some of the other things I've done so I just build a Docker container that that just build my reason code in the docker container ship sit out and there's a reason on the server without the headache of bundling that's very I also explained with doctor recently trying shipping native Native reason in a docking station or two now. Sh and that also works really well I wrote a blogpost about that we can link to now is also

  
 I I was doing that initially the docker container size does matter with you using now because you don't have control over like the infrastructure and where the images are pulled Running part of the way that they have built the new generation of now is that they really want your app to be pretty ephemeral and they want to be able to sleep it and wake it pretty quickly in the small of your app Images the fact that they can wake it that's right from Colt from like cold so that's great so you do have to be aware if your shipping to now of the size of your bundle so that'll affect the reason things feel better right and so that the native compilation that I did resulted in a in a Docker image that was 9 megabytes that's awesome day I send your your shipping best platform than that of course we would get in the way but if you're doing reason native server which you shouldn't be doing yet if you can. That's that's way cool

  
 have you heard anything on that front do you think people are working in that direction

  
 there's

  
 I don't know nothing new necessarily I mean people are playing around and there are you know there's a new account on server library that is in a benchmark that being much better scalable than the old oak animal server library but certainly not not anywhere near the usability of express running like that it's it's very much a low-level people just kind of trying out different things we were aware ways out from that so it almost seems likely to me that we would do before that we'd end up having it like a go compilation Target or somewhere else to go because go has garbage collection typescript with go

  
 yes it's about that was JavaScript in go and it was it was faded who is ffi goes to to go bindings as opposed to C plus plus by The Grind but I was thinking you know there's somebody working on them directly if I wonder how hard it would be to get okay well to go native oh yeah yeah so then you can have a native that takes advantage of all of goes awesome cross-platform cross compilation and their Grade Center Library ass while having a much nicer types of I'm going to get this rock star in my window for saying that but like I just had a really hard time with the lack of generics struggle

  
 that would be cool if someone's going to do that let us know that's right it's been that would be a massive undertaking I'll be like bucklescript all over again so if you're Bloomberg and you're interested in that a lot of money at it but that's cool I don't care if you eat beet that topic into the ground thanks for listening everybody any last notes Jared know that's all I've got all right well happy October thanks a lot by