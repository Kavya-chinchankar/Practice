// INSERT THIS
db.inventory.insertMany([
    { "item": "journal", "qty": 25, "size": { "h": 14, "w": 21, "uom": "cm" }, "status": "A" },
    { "item": "notebook", "qty": 50, "size": { "h": 8.5, "w": 11, "uom": "in" }, "status": "A" },
    { "item": "paper", "qty": 100, "size": { "h": 8.5, "w": 11, "uom": "in" }, "status": "D" },
    { "item": "planner", "qty": 75, "size": { "h": 22.85, "w": 30, "uom": "cm" }, "status": "D" },
    { "item": "postcard", "qty": 45, "size": { "h": 10, "w": 15.25, "uom": "cm" }, "status": "A" }
])


db.inventory.find() // - Fetch all documents

db.inventory.find({}) // - Fetch all documents

db.inventory.find({qty:25}) // - find using perticullar data 

db.inventory.find({ tags: { $in: [ "gel", "blue" ] } })  // -either of one value

db.inventory.find({ tags: "gel", qty: { $lt: 30 } })  // AND

db.inventory.find({ $or: [ { tags: "gel" }, { qty: { $lt: 30 } } ] }) //OR

db.inventory.find({ tags: "blank", $or: [ { qty: { $lt: 30 } }, { item: /^p/ } ] }) // AND and OR

db.inventory.findOne({ tags: "gel", qty: { $lt: 30 } }) 
