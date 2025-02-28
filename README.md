# cs121_2025_project_6__HoS
Heap of Students

Stores and organizes data into Address data, Date data, and Student data. Data stored is currently temporary, and will be changed later on to a dataset.
Three classes used: (Address) (Date) and (Student). Student calls on Address and Date.

[![](https://mermaid.ink/img/pako:eNp1U0FugzAQ_ApyL2kKH0C9VI16yo1bxcVlHbAabGQvlSilb-8aaDDBWALBzDLLzNo9KzQIlrLiyq09SV4aXucqopVhC0Jh9PyTJNGJowjALwBGWDsx030UGuv7XE2QWw-RRRMBwRkaqUqfkSRXa4XVPQi8u4c6wY2v-zS2Ojz6yJeWQMUSD0u_bUFDMPofD76B2VnAA11C4D1aSOy2lbfUFvBbNuv_nzvtWZjaxWODeJKMnciOIU8t4GoeXtDVyGyH48iLNBYVrzdmSHSDuykVRoBE2hdJcPnlbgLHCPTHFqS9CDBG6HOzw-Oy-fwkZofrNH-DqJ-xZ34n2KCEy6AUeKYY3lxGQXafcd8Fidcpv9UUWcxqYWougY5r7-CcYSUofJbSI3DzmbNcDVTHW9RZpwqWomlFzIxuy4qlF3619NY2LtT5rN_Qhqt3rf_fhz-GtjIK?type=png)](https://mermaid.live/edit#pako:eNp1U0FugzAQ_ApyL2kKH0C9VI16yo1bxcVlHbAabGQvlSilb-8aaDDBWALBzDLLzNo9KzQIlrLiyq09SV4aXucqopVhC0Jh9PyTJNGJowjALwBGWDsx030UGuv7XE2QWw-RRRMBwRkaqUqfkSRXa4XVPQi8u4c6wY2v-zS2Ojz6yJeWQMUSD0u_bUFDMPofD76B2VnAA11C4D1aSOy2lbfUFvBbNuv_nzvtWZjaxWODeJKMnciOIU8t4GoeXtDVyGyH48iLNBYVrzdmSHSDuykVRoBE2hdJcPnlbgLHCPTHFqS9CDBG6HOzw-Oy-fwkZofrNH-DqJ-xZ34n2KCEy6AUeKYY3lxGQXafcd8Fidcpv9UUWcxqYWougY5r7-CcYSUofJbSI3DzmbNcDVTHW9RZpwqWomlFzIxuy4qlF3619NY2LtT5rN_Qhqt3rf_fhz-GtjIK)


## Date Class
* scans, converts, and stores values from string variables to int variables.
```
void Date::init(dateString){
    create strings for sMonth, sDay, sYear
    create string stream ss

    clear ss
    set ss to dateString

    copy each value of ss into sMonth, sDay, and sYear respectively (as each value is separated by a '/')

    clear ss
    set ss blank

    ss << sMonth, sDay, sYear
    ss >> Date::month, Date::day, Date::year

    if(ss fails):
        print "failed to initialize"
    
    clear ss
    set ss blank
} // end Date::init

```

## Student Class
* scans, converts, and stores values from a single string into multiple string and integer variables.
```

void Student::init(studentString){
    Student::studentString = studentString
    create string stream ss
    create strings for street, city, state, zip, sBirth, sGrad, and sCredits

    clear ss
    set ss to studentStream

    copy each value of ss into Student::firstName, Student::lastName, street, city, state, zip, sBirth, sGrad, and sCredits respectively (as each value is separated by a ',')

    clear ss
    set ss to blank

    initialize Address::init() adderess with values from street, city, state, zip

    initialize Date::init() birthday with the value from sBday
    initialize Date::init() gradDate with the value from sGrad

    ss << sCredits
    ss >> Student::credits

} // end Student::init

```

* returns the student's name in the format of Last, First
```

run student names through string stream in the format of lastName ", " firstName
return string stream string()

```

## Main()
* creates UI for users to interact with, and returns the value back to main.
```

PrintMenu(){

create string input
print list of commands
get input from user
return input

} // end PrintMenu
```

* loads all students from the database file into the program through the Student Class.
```

void LoadAll(){

    open students.csv
    for each line in file:
        create new Student object called "student" with the input of the current line
        close that student and create new Student object.
    close file when done

} // end LoadAll

```

* deletes all student data on the heap
```

void DeleteAll(){

    for every student inside of student vector:
        delete student
    delete vector

} // end DeleteAll

```

* prints all students
```

void PrintAll(){

    for every student in student vector:
        student.printStudent()

} // end PrintAll

```

* Prints out Students by "Last, First" format.
```
void PrintByLastFirst(){

    for every student in student vector:
        student.getLastFirst()

} // end PrintByLast
```

* Prompts for a last name, and returns the students sharing that last name. otherwise returns that no student has that last name.
```
void Search(){

    make strings input and lastName
    make int counter count
    make bool hasFound set to false

    prompt user for input

    for every student in student vector:
        student.getLastFirst()
        if the last name contains the input:
            hasFound = true
            print counter
            print student info
            counter ++
    if no students have last name:
        tell user no students have last name

} // end Search
```

* calls everything else
```

main(){
    bool isRunning = true
    initialize student vector
    
    call LoadAll(student vector)

    while isRunning:
        call PrintMenu()
        if user types 0:
            print exit message
            isRunning = false (quit program)
        if user types 1:
            call PrintAll()
        if user types 2:
            call PrintByLastFirst
        if user types 3:
            call Search()
        if user types anything else:
            print error and prompt user to try again
    delete student vector

} // end Main()
```