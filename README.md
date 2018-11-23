# TV-AlarmClock
An electronic project to build a programmable hardware that will be able to be connected with one or several kind of remote controls (like a PlasyStation Controller, a TV remote control, etc.). The first goal here is to build a TV alarm clock, it means that the built electronic circuit must be able to be configured and activated before you go sleeping, and then it will wake you up at time by switching on your TV device and using your Playstation (4) controller to open Youtube and go watching a video based on the research terms you already programed into the Microcontroller (Attiny).


       *********************************************
       *                                           *
       *           CONCEPTS / Main Purpose         *
       *                                           *
       *********************************************


There are two main purposes for the object built by this project:
  1) To be a TV (and related devices if needed) alarm for the morning wake up. I admit that a wake up with either "ligth", "sound" and "informations datas" are the three needed components for an efficient and a well-feeled wake up. That's why I think we must have the power of beeing waked up by the TV with the content that interests us the most possible. It is not possible to program your TV like that, it will be with this system !
  2) To be a shuting down (TV and related devices if needed) timer, for the sleeping time. You will be able to fall asleep without having to shutdown your devices manually. The built hardware will do the job for you, this concept avoids your devices to use useless power consumption while you've fallen asleep.

.

       ***************************************
       *                                     *
       *           FIRST VERSION             *
       *       (global explanations)         *
       *                                     *
       ***************************************

**(v1)**: The first version of this built circuit is specific to the combo "TV + PS4" that I'm interested in.



 - **Components**:
    - A TV remote Controller (1 input -> for waking up the sleeping TV)
    - A PS4 Controller (4 inputs -> To start the PS4, and browse until the video is started)
    - A TV Controller (1 input -> for waking up the sleeping TV)
    - 4 LEDs -> to display the value entered by the 4 buttons discribed just then / below.
    - 4 buttons -> to enter input values (integer values limited by the number of buttons). The input value is read by the microcontroller in binary base. That means that each button is a single "bit" => with 4 bits, you can input until 16 differents values (and retrieve the decimal value by converting it then in the microcontroller program).
    - One Start Power button
    - A "Scale", used with the Start Power button to activate the electric supplying in the system.
    - One Start timer button, to enable the system to end the configuration step, and start the timer step (until the final action -> Wake Up or Shutdown).


*TODO: Add simpler and smaller schemas directly into the README file

**If you want more informations about the conception of the tool, have a look at the "Conception_Explanations"** folder which contains some pictures of my paper conception notes. You'll find electronic schemas of each part, and two use diagrams (one for the system view, one for the user view).



       ****************************************
       *                                      *
       *           Future VERSION             *
       *           (contributions)            *
       *                                      *
       ****************************************



**(v2)** : Finaly, the future intention is to made a more generic circuit, to build a more standalone object than will be able to be connected to any TV remote control and any other kind of controller. Of course, it will still require to unmount the controllers to get some electric connections (to control the remote buttons), but that will be all the electronic works needed with the microcontroller programmation. I certainly won't have time (and not the immediate need) to start this version, so if anyone is motivated to contribute to do this version, he will be kindly welcomed :).
