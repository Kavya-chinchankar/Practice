// CREATE DB
db.inventory.insertMany([
    {
      item: 'canvas',
      qty: 100,
      size: { h: 28, w: 35.5, uom: 'cm' },
      status: 'A'
    },
    {
      item: 'journal',
      qty: 25,
      size: { h: 14, w: 21, uom: 'cm' },
      status: 'A'
    },
    {
      item: 'mat',
      qty: 85,
      size: { h: 27.9, w: 35.5, uom: 'cm' },
      status: 'A'
    },
    {
      item: 'mousepad',
      qty: 25,
      size: { h: 19, w: 22.85, uom: 'cm' },
      status: 'P'
    },
    {
      item: 'notebook',
      qty: 50,
      size: { h: 8.5, w: 11, uom: 'in' },
      status: 'P'
    },
    {
      item: 'paper',
      qty: 100,
      size: { h: 8.5, w: 11, uom: 'in' },
      status: 'D'
    },
    {
      item: 'planner',
      qty: 75,
      size: { h: 22.85, w: 30, uom: 'cm' },
      status: 'D'
    },
    {
      item: 'postcard',
      qty: 45,
      size: { h: 10, w: 15.25, uom: 'cm' },
      status: 'A'
    },
    {
      item: 'sketchbook',
      qty: 80,
      size: { h: 14, w: 21, uom: 'cm' },
      status: 'A'
    },
    {
      item: 'sketch pad',
      qty: 95,
      size: { h: 22.85, w: 30.5, uom: 'cm' },
      status: 'A'
    }
  ]);

// ASCENDING ORDER 
db.inventory.find().sort({qty:1})

// DESCENDING ORDER
db.inventory.find().sort({qty:-1})

// LIMITS IS 1
db.inventory.find().limit(1)

// LIMIT IS 2
db.inventory.find().limit(1)

// SKIPS 1 DOCUMENT
db.inventory.find().skip(1)

// SKIPS 2 DOCUMENTS
db.inventory.find().skip(2)

// PAGINATION USING MONGODB FOND AND LIMIT

// 1 TO 10
// no = 8
// db.blogs.find().skip(pageNo-1).limit(no)
// pageno = 1 db.blogs.find().skip(0).limit(8)
// pageno = 2 db.blogs.find().skip(8).limit(8)
