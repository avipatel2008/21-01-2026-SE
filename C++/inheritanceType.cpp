// 1. Single :- 1 parent, 1 child
// 2. mutltilevel :- 1 parent, 1 child, 1 grand child //chain
// 3. multiple :- multiple parent, 1 child
// 4. hierarchical :- 1 parent, multiple child
// 5. hybrid :- combination of multiple and multilevel

class a {

}

class b {

}

class d : public b {

}

class c : public d {

}

class e : public a, public b {

}



