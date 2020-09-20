import math

def simple_math(value):
    value = value /3
    value = math.floor(value)
    value = value-2
    print(value)
    return value

def complex_math(old_value):
    new_value = []
    temp_value=old_value
    value= 0
    if (old_value >= 0 ):
        for i in new_value:
            value += new_value[i]
        value = value + temp_value 
    else:
            new_value = simple_math(old_value)
            old_value -= new_value 
            print(old_value)

    return value 



def main():
    maths=0
    with open("test.txt","r") as t:
        for line in t:
            sm = simple_math(int(line))
            print(sm)
            cm = complex_math(sm)
            maths += cm
        print("%d"%(maths))
    

main()
