// ---- User code
class MyInterfaceJS {
    foo(x) {
        console.log("MyInterfaceJS.foo(" + x + ")");
    }
    testOutcome(success) {
        if (success) {
            return { result: {_x: 1000, _y: "one thousand"}};
        } else {
            return { error: "fail" };
        }
    }
}

function same(a, b, desc) {
    if (a === b) {
        console.log(desc + ': yes');
    } else {
        console.log(desc + ': no');
    }
}

function same_c(a, b, desc) {
    if (Module.MyInterface.comp(a, b)) {
        console.log(desc + ': yes');
    } else {
        console.log(desc + ': no');
    }
}

let main = function() {
    console.log("-------- 1")
    {
        var i = Module.MyInterface.instance();
        var j = Module.MyInterface.instance();
        same(i, j, "same c++ object passed to js twice");
    }

    console.log("-------- 2")
    {
        var i = Module.MyInterface.create();
        var j = i;
        same_c(i, j, "cpp object to js and back");
    }

    console.log("-------- 3")
    {
        var i = new MyInterfaceJS();
        var j = new MyInterfaceJS();
        same_c(i, j, "different js object passed to cpp");
        same_c(i, i, "same js object passed to cpp twice");
    }

    console.log("-------- 4")
    {
        var i = new MyInterfaceJS();
        var j = Module.MyInterface.pass(i);
        same(i, j, "js object to cpp and back");
    }

    console.log("-------- 5")
    {
        var i = Module.MyInterface.instance();
        console.log("got string: " + i.testStr("hello"));
    }

    console.log("-------- 6")
    {
        var i = Module.MyInterface.instance();
        i.foo(32);
    }

    console.log("-------- 7")
    {
        var i = Module.MyInterface.instance();
        var v = i.testBin(new Uint8Array([1,2,3]));
        console.log(v);
    }

    console.log("-------- 8")
    {
        var d = new Date()
        console.log(d);
        var i = Module.MyInterface.instance();
        d = i.testDate(d);
        console.log(d);
    }

    console.log("-------- 9")
    {
        var i = Module.MyInterface.instance();
        var r = { _x: 100, _y: "hello" };
        console.log(i.testRecord(r));
    }

    console.log("-------- 10")
    {
        var i = Module.MyInterface.instance();
        console.log(i.testOptional1(null));
        var r = { _x: 100, _y: "hello" };
        console.log(i.testOptional1(r));
    }

    console.log("-------- 11")
    {
        var i = Module.MyInterface.instance();
        var r = i.testOptional2(null);
        if (r) {
            r.foo();
        } else {
            console.log("got empty optional");
        }
        var r = i.testOptional2(new MyInterfaceJS());
        if (r) {
            r.foo(222);
        }
    }

    console.log("-------- 12")
    {
        var i = Module.MyInterface.instance();
        var l = [{_x: 100, _y: "100"}, {_x: 200, _y: "200"}, {_x: 300, _y: "300"}];
        var r = i.testList(l);
        console.log(r);
    }

    console.log("-------- 13")
    {
        var i = Module.MyInterface.instance();
        var s = new Set(["1", "2", "3"]);
        var r = i.testSet(s);
        console.log(r);
    }

    console.log("-------- 14")
    {
        var i = Module.MyInterface.instance();
        var m = new Map([["1", {_x: 100, _y: "100"}],
                         ["2", {_x: 200, _y: "200"}],
                         ["3", {_x: 300, _y: "300"}]]);
        var r = i.testMap(m);
        console.log(r);
    }

    console.log("-------- 15")
    {
        var i = Module.MyInterface.instance();
        var r = i.testOutcome(true);
        console.log(r);
        r = i.testOutcome(false);
        console.log(r);
    }

    console.log("-------- 16")
    {
        var i = new MyInterfaceJS();
        Module.MyInterface.testOutcome2(i);
    }

    console.log("-------- 17")
    {
        var a = new Uint32Array([1,2,3,4]);
        var b = Module.MyInterface.testArray(a);
        console.log(b);
    }

    console.log("--------")
}
