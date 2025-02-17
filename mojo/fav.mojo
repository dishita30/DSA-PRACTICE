from python import Python

fn main() raises :
    let py = Python.import_module('builtins')
    let user_input = py.input('what is your favourite color?')
    print('your favourite color is...', user_input)