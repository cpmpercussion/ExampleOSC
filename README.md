## ExampleOSC 
### an example iPhone app using MetatoneOSC

Hi! This project show how to setup an iPhone app with MetatoneOSC. There's a pure data patch as well for testing connectivity!

To try it out, compile the app in XCode and run the app in the simulator. open the Pure Data patch in Pd-Extended on the same computer.

![Screenshot of ExampleOSC running in the iPhone simulator and the Pd receiver patch.](https://raw.githubusercontent.com/cpmpercussion/ExampleOSC/master/ExampleOSCimage.jpg)

You should be able to send and receive OSC messages from the app to the Pd patch. If you want to try it out on a device, you'll have to change the hostname in both the Pd patch and the iPhone app.