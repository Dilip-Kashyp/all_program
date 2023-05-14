let myjokes =
  [
    {
      "category": "Programming",
      "type": "single",
      "joke": "Java and C were telling jokes. It was C's turn, so he writes something on the wall, points to it and says \"Do you get the reference?\" But Java didn't.",
      "flags": {
        "nsfw": false,
        "religious": false,
        "political": false,
        "racist": false,
        "sexist": false,
        "explicit": false
      },
      "id": 4,
      "safe": true,
      "lang": "en"
    },
    {
      "category": "Pun",
      "type": "single",
      "joke": "I have these weird muscle spasms in my gluteus maximus.\nI figured out from my doctor that everything was alright:\nHe said \"Weird flex, butt okay.\"",
      "flags": {
        "nsfw": false,
        "religious": false,
        "political": false,
        "racist": false,
        "sexist": false,
        "explicit": false
      },
      "id": 82,
      "safe": false,
      "lang": "en"
    },
    {
      "category": "Programming",
      "type": "single",
      "joke": "Documentation is like sex:\nWhen it's good, it's very good.\nWhen it's bad, it's better than nothing...",
      "flags": {
        "nsfw": true,
        "religious": false,
        "political": false,
        "racist": false,
        "sexist": false,
        "explicit": false
      },
      "safe": false,
      "id": 305,
      "lang": "en"
    },
    {
      "category": "Misc",
      "type": "single",
      "joke": "Relationship Status: just tried to reach for my dog's paw and he pulled it away so I pretended I was reaching for the remote.",
      "flags": {
        "nsfw": false,
        "religious": false,
        "racist": false,
        "sexist": false,
        "political": false,
        "explicit": false
      },
      "id": 195,
      "safe": true,
      "lang": "en"
    },
    {
      "category": "Misc",
      "type": "single",
      "joke": "Never date a baker. They're too kneady.",
      "flags": {
        "nsfw": false,
        "religious": false,
        "political": false,
        "racist": false,
        "sexist": false,
        "explicit": false
      },
      "safe": true,
      "id": 271,
      "lang": "en"
    },
    {
      "category": "Misc",
      "type": "single",
      "joke": "In Soviet Russia, gay sex gets you arrested. In America, getting arrested gets you gay sex.",
      "flags": {
        "nsfw": true,
        "religious": false,
        "political": false,
        "racist": false,
        "sexist": false,
        "explicit": true
      },
      "safe": false,
      "id": 289,
      "lang": "en"
    },
    {
      "category": "Pun",
      "type": "single",
      "joke": "Today, my son asked \"Can I have a book mark?\" and I burst into tears.\n11 years old and he still doesn't know my name is Brian.",
      "flags": {
        "nsfw": false,
        "religious": false,
        "political": false,
        "racist": false,
        "sexist": false,
        "explicit": false
      },
      "id": 200,
      "safe": true,
      "lang": "en"
    },
    {
      "category": "Misc",
      "type": "single",
      "joke": "I visited my friend at his new house. He told me to make myself at home. So I threw him out. I hate having visitors.",
      "flags": {
        "nsfw": false,
        "religious": false,
        "political": false,
        "racist": false,
        "sexist": false,
        "explicit": false
      },
      "safe": true,
      "id": 304,
      "lang": "en"
    },
    {
      "category": "Dark",
      "type": "single",
      "joke": "I hate double standards. Burn a body at a crematorium, you're \"being a respectful friend.\" Do it at home and you're \"destroying evidence.\"",
      "flags": {
        "nsfw": false,
        "religious": false,
        "political": false,
        "racist": false,
        "sexist": false,
        "explicit": true
      },
      "safe": false,
      "id": 274,
      "lang": "en"
    },
    {
      "category": "Dark",
      "type": "single",
      "joke": "I didn't vaccinate my 10 kids and the one that survived is fine!",
      "flags": {
        "nsfw": false,
        "religious": false,
        "political": false,
        "racist": false,
        "sexist": false,
        "explicit": false
      },
      "id": 96,
      "safe": false,
      "lang": "en"
    }
  ]



let index = Math.floor(Math.random() * (myjokes.length - 1))
joke.innerHTML = myjokes[index].joke
