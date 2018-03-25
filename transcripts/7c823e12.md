  
welcome to another episode of recent town I'm your host yard Forsyth and I'm very excited to have our first ever guest on reason town today chenglou welcome thanks for meeting me here actually this is my first podcast ever so hopefully everything goes all right and many thanks to our been with sponsor Tyler McGinnis. Com which is offers online courses for learning react and other Technologies a steward of the reason why I want to get you on here so early because you have a lot of perspective over how reason has developed and where it's going how would you describe your role as well as Siri

  
I really like the way you chose which is Stuart so to be clear I was I am not the inventor of Reason Jordan is the inventor of it and even the same thing that is so you mention might be kind of a stretch in a sense that you know a reason borrows a lot from a camel and we just put our own layer of coating over it and do the community where I can check her out and so I think we should give you credit so but yes I kind of because of my position my unique position I kind of have a big brat overview of a what reason is from from the community to the language to what was whatever future work we need to do so I will say that I might be too I try to glue things together at so I might be the glue I don't want to sell to pretentious either but what was the other thing still going

  
when there's some immigration problem when for example buckles Group which is almost made entirely by homeboy Bob sign to smoothly I can do them together and it so that and so that at the end we can present. Coherence Story 4 for the newcomers and a truck and I do do lots of work also behind the scene in the in terms of

  
 let's a manager of work even though I'm a individual contributor still but I'm officially a few

  
 I won't say any Trina podcast but you can ask me if you have any of you ever meet me real life about how it was the reason project actually goes under the hood is very funny + funny interesting this this this this happen short for example according to people has been really funny making tree off is it's it's one of the thing that makes you grow up the most I believe and I think it was one part of my belief is that

  
 what will my separated senior engineer from let's see a junior engineer beside a Euro experiences and all that is the fattest senior Engineers can make the cost analysis much better than someone who just otherwise got started so attempting to make a while you know what this is great and all but we might not be able to do this has been very mature in process for me

  
 sounds like it and as I see it the recent project has put a lot of focus on on trade-offs and we'll talk about that in a little bit. How did you end up in this position as as a steward of reason I like you said Jordan kind of came up with it originally how did you get involved so I would like all these things like you the plan starts very early on and then 1.8 kind of at 1:20 in all things come together there's a there's a sudden facial growth in terms of a how how realistic Things become and little bit and that's how I got hired actually by using reacting open source of very early on and that's how I can start a contact into touch with the Jordan

  
 okay and so so weak and I have been talking on and off on related topics for a long time now so I would say at least at least 4 years while since the beginning of Open Source in basically Jordan always have these ideas around I guess and how I got into reason specifically was

  
 was after doing react stuff I went on to do a little bit of messenger.com stuff

  
 there was a big discrepancy between what what you learned on the reaction and what you see people actually do on you know on a real concrete real life 30 product in a sense that you know it's not sometimes I'm getting there are also other constraints for example you need to unborn you cover it's right you do on New Comers but newcomer by definition don't understand most of them you were talking about I didn't want to ship a feature it looks completely different and I just felt like

  
 it's good it's good for me it's good for me that I know what's going on tonight that I can ship a feature but the sum of the part of the co-pays you know the moment I am gone it's very hard to see how to predict how things were going to work out sure and that was so because it is me a pretty unique perspective in a sentence that I was working on the messenger code base and then I went back to school after coming back to the other messenger Prada on the specific section I wrote and seeing all that new Kobes pie on top of it and seeing how a bridge is to the original code I wrote you realize their mistakes and lots of experience people mistakes

  
 about how you can make a product it's about how you how lasting this is how you can help other makes similar products and Sarah like I think I will I'm I'm slowing nothing JavaScript that if you ask me to write just a product want to shop product I don't know if you ask me just make sure you don't make a mini shut up and I will never modify the Cove Base again or short so I just went by there jobs for Bob and get your work done but but unless you're doing that need to be made available for people after you you know what you you could. Perspective really allowed me to understand that I can't just say for myself that you know what types are not that useful for myself is it it's for other people that I'm running the code of where at the start

  
 you think oh source code is a language for for a programmer to communicate with the computer and then as you go along you realize actually the most important communication is from the programmer who wrote it to the programmer who's modifying it later and then it's only secondarily for a computer to execute it was basically one person talking to a computer right with a potentially a few other people in the room also listening to that person talking to a computer or maybe come come come into the room after the fact to stretch a metaphor a little bit and see what the person initials person has transcribed onto the computer and more nowadays it's so you have a room of people and you're talking to them more than you're talking to a computer and I will give you an actual example of this that I don't think people realize much but I won playing ship some JavaScript code and it was Christina you you landed and

  
 did the process you drove from writing out that just sent 90 and took 2 days for whatever reason and it boxing production and you don't understand why or maybe Bunch introduction and someone finds out one month later and finally I found out his mind and I think this really tries to point home even if my GF is clear and and I'll beautiful and someone else at that time before I landed that has concurrently landed another dress that didn't interact well with my sure especially call Bayside where you have thousands of this per day just it's it's hard just by looking at your own because it was some kind of miscommunication so it's funny because I think reason has prevented at least like 30 or more of bugs that are result of Simply this

  
 why people I don't think people are knowledge much decide that you you have to dis landing at the same time or or people working in Virginia sister you're saying that as you said you were working at Facebook and you saw it kind of these bugs that come just from miscommunications when people stood out to you about reason that had the chance to stop more of this and kind of help that communication be better

  
 yes so it doesn't catch this bike is very easy you do a final of final round of centralized you know I'm checking out somewhere in the continuous integration process so you do catch all these but that's a technicality of it but I think I do all I also have some stats on concretely how much how much of the communication in quote is is going through and how many Tommy insurance has has been able to contribute to the Cove Base how many boot campers Etc and so far if I'm not mistaken the boot campers and in turn have a committed zero into the reason call base

  
 wow

  
 yeah yeah let's talk about that so because you're still working on the messenger.com code base for part of your job right the time I spend on messenger. Com proper and on Facebook Chat top and some rated product my very but it's actually a very crucial part of how I started a rating on Ellen things like reason react so every reason react feature that we ship out so far has been very stable and it doesn't come from us magically you know thinking in our own Ivory Tower like oh what what do the what do the other programmers want to know it's actually it actually comes from the side that Ricky and I and Cristiano and Jordan all the Cove Base and and I we tell ourselves is this good enough now is this good enough to every reason by feature right now has been extensively tested on the messenger code base yes so when were you released

  
 that's at least satisfying to something I've messenger so I am reminded of something Steve Jobs work from the Prada backwards and so this is exactly what we've been doing will you start from a product work backward we we are also on other products now so we start from another product work backward and that way you know as soon as I stand make an API go back to the co-pays remove the old API blah blah blah and then we doing with your new feature release

  
 I like that I like that quote and I think I really comes out in when you're working with reason and I've seen the new wave guys that don't come out with it feels very very grounded right where it's worth I couldn't this is based on reality what we are we're doing this because of real things are seeing not just think that we expect people will see and to be to be clear some some people might also defend the other way around of doing things to thing from for example first principle of top-down I shouldn't I meant to say this but this is we definitely do top-down decision-making to it's just that reality practical engineering application already very easy to do top down vs bottom-up top-down everybody can sit in my chair and think of a new reason react API

  
 bottom up is basically your validation and so I'm just trying to put an emphasis on the fact that you do need to do bottom I'm you can just go talk to him all the time he's behind reason and kind of the ideologies that you think reason is striving for one of them is bottom up and going from the concrete to abstract top down and it's the bottom up Hondas usually missing these kind of languages in projects so sure philosophy you know discretion is very I always have a hard time answering it is specially any particular for example if someone asks me

  
 4C for reason in the next 5 years and honestly I don't know for me and I'm not getting out of a good good job trying to guide the community to to some places and then I realized it was actually fine it was very fine and and there's some there's an expression called follow your nose and this is exactly what we've been doing for the past two years and and or so and for the past two years there are a lot of things that did not work out at all and there are some opportunities that we have in our first conversation that we picked up and that became a central part of what reason is and I'll give you one very real example of script wasn't a peripheral vision for for more than 2 years actually reasons but you know

  
 he's so easily through this JavaScript JavaScript story and then you know we can we can also on shout the native story and start working on the parallel you know this resulted in what you see today and there are also a few other items in my peripheral vision right now maybe I'll talk about another time okay so the reason is indeed also about striking that sweet spot of 20% of the f word for 80% off the value we will you sing this is this is a way for us to gain more popularity while staying staying as a small team right cuz cuz if you visualize the curve of how much effort it takes for something it's not lame you're definitely not it begins like you know what you 20% of the effort and on the y-axis you already get 80% of the result and the rest is grunt work

  
 so you got to make these Traders but Raiders are very carefully so for example what was the story for say testing all documentation or or Reason reacts API or Reason syntax or buckles and harder part after work is to actually make sure that you go back to this response and evaluate them at the amount of time and I think this is what a lot of projects fail to do is that they stay in that sweet spot and everybody have moved on they forget to come back and reconsider that sweet spot it might not be buying more and some of the stuff we do right now we're very aggressively cannibalizing are working the past because when you dream that you know it's no longer sweet spot we need to provide a hundred percent of the effort there and documentation was one such thing for me or Bob and then you realize it's not good enough

  
 NetSpend 20% of the Efron it for 80% of the app for the community gets big the community gets on time every month at least from people who told me that they said they sent me for translating reason to why did they send it to me for translating into other languages do you know how to respond so that's why we jumped out of it that's why we spend a crazy amount of effort doing the documentation trying to do them correctly trying to unify the fact that you know there's really a reason documentation I know Tamil documentation documentation and who knows what next Derek's there's going to be some unifying perspective on this and otherwise I don't I don't have too much of a philosophy beside

  
 your nose and see what opportunities come up and adapt yourself to them like we have done so far is it seems like it's very focused on being onboarding friendly making it as as easy as possible sometimes at the expense of this would be more effort or it wouldn't necessarily benefit Advanced users as much but it would really make a difference to people that are just starting out upgrade happened last October on this I am extremely proud of the community right now and at that time for lots of people come and tell me you know what I I disagree with the sin x change but I understand how this is better for for us in general

  
 so I'm going to go with it in the future because this is the hard part of scaling a community the easy part is done some cold outside of the scaling Community the community people have different opinions but to come together from nature to come together to make a centralized design decision and to be okay with it and to push for it together this is I think this is something that you can ever hope for i n we have it and we should be there very lucky and awesome regarding beginning I have a few of very precise

  
 to consider what is beginner friendly and how to how to proceed to in to making a making architecture that's beginner-friendly making sure that are beginner friendly and first we need to on over because especially in a situation for reason he's very overloaded so are you to program it or are they or are they know who just heard about it and want to get started you know that that's that's that's three very different categories we are what we want and need to make compromises to make sure that all three groups of newcomers are welcome so forth so I I think you know it like working to the Buckle script all off Bob's working buckle

  
 they benefit do counselors for people who are experts at true train that's basically just am PM and some other other a good Integrations like all reason react look at it refers to react JS right where she has documentation which is very thinly putting our layer on top to explain the basics and all that and come from different backgrounds and we do have quite a bit of quite a few community

  
 dang you need a different approach so for example better error message you know it is very uncomfortable it's a big trade-off you have to make because what is beginner beginner friendly will will be for us to create for example of a Creed reason app reason I approached it right and you know if you want to use this project this become extremely on friendly for the JS beginners who are actually Jazz experts and they already have their own Creed react how are they going to add drop this into their company it's very unclear right thing I can think of all three of these is is to just try not to do too

  
 much when the time is not ready try to try to keep a sin if you if you can to give a good unify story for everyone in the newcomer Community might as well. So for example are PSP and it's template is very thin and you open it up and you realize how well this is it you know there's not much to it and I just polished and and also it helps a lot of work for this one part I care I care about a lot which is how does a newcomer to transition into a into a season programmer but this is something I care a lot about and if you if you give them like this opaque magical abstraction that is created reason Buck ice cream at work rear is a native app and it's one click

  
 Summer by definition summer in in there like

  
 you might be invisible in preventing them from growing by allowing them to look into how to start actually works and how to diagnose box for themselves how to make sense of the type errors that you know we can cover all done right and house sure how how for them to Fork into a different understanding of reason and this is something that's lacking if you make one single in a magical super polished a beginner boiler play for for the entire community definition you would be hiding complexity and then they wouldn't have the opportunity to engage with that you can actually hide it away completely genius So you you're going to make do what you got to do the best you can and I think we're in a pretty good place in terms of a beginner friendliness how far is there there's always work to be done like for example the Buckle script interrupt is very comprehensive and and sometimes it's pretty scary for a newcomer

  
 but how do you make this actually friendly to for example newcomer newcomer who are from the OJs so you mentioned you mentioned recently a couple of times now I could you tell us a little bit about what's what's coming down the pipe I'm sure many of us watch Dan abramov talk at jazz, viceland where he demo kind of the future of reacts got to be on react 16 what what's coming and reason react react to react to anything that's not a problem and we actually talk to it how to react him a lot regarding this request

  
 that that tells you how to move off the old react API and some some lifecycle methods like componentwillreceiveprops so we're going to be making the same changes with a modded trigger us to make sure that you you don't get turned to her I care a lot about this and so a sink will be ready and as far as we know there's nothing reason react specifically that prevents a scene from happening we are actually like I said before we are going to test tasting extensively on messenger to make sure that you know it looks up to you are claimed aside from that I think what we're going to do with reason react is very in the spirit of what we've done when we release that little router utility lines

  
 how to make sure that you know you're not going to be super opinionated and dictate a centralized solution for routing and this is a you get to only use that if you do something else it's not going to play while you're on top exactly according to our principal of let you know in case 24 sound energy for 80% of benefit exemplify in terms of implementation and let's see polish and I I do I do want to put an emphasis on polish because people think you'll see three lines of code this is very easy to write it took me 2 weeks to write because I had to dive back into exactly and also I had to go through five different apis or so or 4 because you have to dive back into the react. I'm going to realize you know what model this is a component what about getting did now what about will Mountain which we don't support subscription is that going to work out and and you know what what what's the performance characteristic I interrupt story so basically

  
 Melissa router in particular I literally went through I collected every single react reason react-router blog post I got time and I read through them and look at the spaces I'm reading it already it's been working out pretty well for us so routing I will consider that temporary for now and we're going to come back to it maybe later on when when you know the situation changed or phrase on pole maybe a sink has different application for the router I don't think so but we'll see and it's all the concrete me what's going to come next is maybe some testing utilities this is we have some pretty funny

  
 actually currently trying on the Cove Base and from the first look of it I'm I'm very excited about it it's just as always you know like I will show you the code later when we when we actually pulled off the right now it does it's not right it's really not that much code and it gets the job done and I'm pretty proud of it and maybe you doing something with it or or maybe styling head styling is a subject that says let's just say very turning at the moment so I am very afraid to touch the library is there are the last time I am I am a very giving off the relative solution so we'll see what happens okay

  
 awesome said near the beginning when people ask you about the future of reason you don't have much to say but I do want to ask you what what do you see in the next 6 months concrete Lee we will have a very exciting things coming up that lots of people want it and that is a better full maybe typescript integration integration because the lots of the immigration concerned and pocket screw cancer so this integration will get better and either way you think it is basically and we will also and typical way maybe make a specific integration for a reason react to so you will have your generalize version of a Lhasa conversion right cuz cuz you know taxstone convert over by directionally correct correctly this is

  
 how to solve a problem cuz flow has types reason can't express in vice versa are you even doing reason right well maybe maybe a community or something I don't know but I would like to talk about a little bit about this later but mentally you cannot evaluate a type system by just going through a laundry list of features and and Counting the length of the features basically so so we will so in the case of reason why I interact with reason reason reacting to rap with a reaction yes I think we're in a pretty nice place right now but we can actually AutoTrader ate some of these interrupt boundaries which will be nice I would like to have a better Json story right now BS Jason has been very useful for us

  
 maybe something all of January it will be cool there to maybe maybe you'll just directly generates vs Jason or maybe something else I don't know yet documentation-generation will be nice to these kind of things I think it's the listener is interested they should come to us and pay us directly because these things are rather centralized it's very hard to just throw it out in the community and hope that something will come out of it and you just take a solution it doesn't work very well so I rather if we we talk together and more nuanced discussion about these issues and last but not least there is the promise story The Promise story promises what about everybody use them and it is satisfied so we're definitely going to try to satisfy this better with some itching away sugar maybe but ultimately we also want to make sure that we don't make like callbacks either I have my own motivation for for making sure

  
 we have a good fallback to call back but so we can discuss this another time maybe I should write it down somewhere to also talking about baccala strip on the back of script side we will be doing the upgrade soon to a new account version so for us it doesn't change much in terms of user experience accept the fact that you will get in line record which is pretty cool sorry I didn't like inside a very constructive not inviting my record and also we will be testing barrier extensively testing the new addition to the two days listing standard send Library which is Sherrod wedlow camel and there are a couple of days I'm extremely excited about and I want I've been keeping it a surprise for 2 weeks but we have some black hose coming up or regarding this subject but I actually believe some parts

  
 about is done just right is as much of a value proposition then reason the entire syntax itself more on that in two weeks will be excited to casino watching and I think kind of typical Humboldt the data structures seem to be very performant even talk about performance when we talk about anymore because it's such a given but right now it's just generated. It's actually pretty pretty surprising especially when you when you dress like I did I structure it gives you a feeling of the first time you actually see it a chance I'll put some bucklescript in the sense that you log

  
 immutability works so right now you can start and end directly use a GS artifact and create a few set items or a map items are you logging and its use only realize how the whole entire thing works and that's that looks simple in your parents but it's extremely hard to pull off and I I would like to think that Bob has sold out for the most part and it's been it's been very great to see him doing some you mentioned Community contributions what are some things that you would like people to start working on start thinking about or contributing last time it was actually internationalisation which is that's admittedly not exciting for people to contribute to but people did and

  
 this is where we can leverage T of the massive Carlisle ization that is our community where are you in the French version make a Chinese version etcetera and so reasonable reason. For example in French and Chinese and Japanese and Russian. They're pretty legit in Spanish to this is the best part of the community this is where it shines right it says it's the NASA paralyzation for most of the centralized decision for the design of foundation of microscope that reason I would rather again you ping us or put a post somewhere in the Forum and I will give us more nuanced Direction but in general I will actually love the community to go out and right products with them at this a lot

  
 Simpsons the messenger the messenger the conversion which was which was at 50% when they don't know none of your Technique set up x-rays you cannot justify the reason syntax of whatever type semantics because by definition they might not understand about it but did you understand how much of a vote of confidence it is if other other the companies are picking it up and so far we have lots of companies I picking them up and sing to to to our community this is working out and this is this is the thing that will scale reason I think you go

  
 what's a good call out to close on thank you so much for being on a podcast lots of really amazing things and you've got more to come