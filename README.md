# Boden

*Image representing core caps of Boden. Make it easy for people to star the repo even if they don't have time to read.*

*Teaser: What is Boden in two to three short sentences.*

## Getting Started

Android apps can be built on macOS, Windows, and Linux. iOS apps can be built on macOS only.

Choose your development platform:

* [macOS](#building-boden-apps-on-macos)
* [Windows](#building-boden-apps-on-windows)
* Linux

### Building Boden Apps on macOS

Choose your target platform: [iOS](#ios-apps) or [Android](#android-apps).

### iOS Apps

To build iOS apps on macOS, the following dependencies need to be installed:

1. macOS 10.13.6 High Sierra or newer
2. [Xcode 9.2+](https://developer.apple.com/xcode/) (with Command Line Tools installed)
3. [Python 3.4+](https://www.python.org/downloads/)
4. [CMake 3.12+](https://cmake.org/download/)

> If you are not sure whether all of the dependencies listed above are installed, jump to the [Dependency Installation Guide for iOS on macOS](#setting-up-macos-for-ios-builds) and follow the steps listed there.

Follow these steps to set up Boden for iOS development:

1. Open the Terminal app and clone the git repository: 

		git clone git@github.com:AshampooSystems/boden.git

3. Run the `boden` build tool to generate an Xcode project:

		cd boden
		./boden prepare -p ios

4. Open the generated project in Xcode:

		open build/ios/std/Xcode/boden.xcodeproj

5. Select the `uidemo` target and press Cmd+R to build and run the example application.

### Android Apps

To build Android apps on macOS, the following dependencies need to be installed:

1. macOS 10.13.6 High Sierra or newer
2. Command Line Tools
3. [OpenJDK 8](https://openjdk.java.net/)
4. [Python 3.4+](https://www.python.org/downloads/)
5. [CMake 3.12+](https://cmake.org/download/)
6. [Android Studio](https://developer.android.com) (with Android NDK)

> If you are not sure whether all of the dependencies listed above are installed, jump to the [Dependency Installation Guide for Android on macOS](#setting-up-macos-for-android-builds) and follow the steps listed there to install them.

Follow these steps to set up Boden for Android development on the Mac:

1. Open the terminal and clone the git repository:

		git clone git@github.com:AshampooSystems/boden.git

2. Run the `boden` build tool to prepare an Android Studio project:

		cd boden
		./boden prepare -p android

4. Run Android Studio and open `boden/build/android/std/AndroidStudio`.

5. Select the `uidemo` target and click the Run button in the toolbar to build and run the example application.

### Building Boden Apps on Windows

To build Android apps on Windows, the following dependencies need to be installed:

1. Windows 10
2. [Python 3.4+](https://www.python.org/downloads/)
3. [CMake 3.12+](https://cmake.org/download/)
4. [Git](https://git-scm.com/download/win)
5. [Oracle JDK 8](https://www.oracle.com/technetwork/java/javase/downloads/jdk8-downloads-2133151.html)
6. [Android Studio](https://developer.android.com) (with Android NDK)

> If you are not sure whether all of the dependencies listed above are installed, jump to the [Dependency Installation Guide for Android on Windows](#setting-up-windows-for-android-builds) and follow the steps listed there to install them.

Follow these steps to set up Boden for Android development on Windows 10:

1. Open a Command Prompt: Hit Win+R, type `cmd` and then hit Enter.
2. Clone the git repository:

		git clone git@github.com:AshampooSystems/boden.git

3. Run the `boden.py` build tool to generate an Android Studio project:

		cd boden
		python boden.py prepare

4. Run Android Studio and open `boden/build/android/std/AndroidStudio`.

5. Select the `uidemo` target and click the Run button in the toolbar to build and run the example application.

## Dependency Installation Guide

### Setting up macOS for iOS builds

#### 1. Install Xcode

1. Open the App Store app by clicking on the Apple logo in the menu bar and then selecting “App Store...".
2. Click on the search field and type Xcode.
3. Locate Xcode and click Get.
4. The store page for Xcode opens up. Click the Get button again.
6. Once installed, open Xcode by clicking Open and agree to the terms of service. Xcode will install components afterwards.
7. Finally, open up a terminal and run `sudo xcodeselect -s /Applications/Xcode.app/Contents/Developer`.

#### 2. Install Homebrew, Python, and CMake

1. Install Homebrew:

		/usr/bin/ruby -e "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/master/install)"

2. Install Python and CMake: 

		brew install python3 cmake

### Setting up macOS for Android builds

#### 1. Install Homebrew, Java, Python, and CMake

1. Install Homebrew:

		/usr/bin/ruby -e "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/master/install)"

2. Install Java 8:

		brew tap caskroom/versions
		brew cask install java8

4. Install Python and CMake:

		brew install python3 cmake

#### 2. Install Android Studio

##### 2.1 Download Android Studio

1. Go to https://developer.android.com.
1. Click “Download Android Studio".
1. Agree to the Terms and Conditions.

##### 2.2 Complete the Installation

1. Once the download is completed, open the DMG.
1. Drag Android Studio.app and drop it on the Applications folder icon.
1. Open Android Studio using Finder or Spotlight.
1. Follow the steps in the setup wizard.
3. Stay on the "Welcome to Android" screen and complete the steps below to complete the installation.

> For Boden, it's sufficient to select the default setup type in the Android Studio Setup wizard. When asked, grant permission to the Intel HAXM installer to allow for Android device emulation.

##### 2.3 Install Android NDK

1. On the “Welcome to Android” screen, click “Configure” and select “SDK Manager".
1. Click on the “SDK Tools” tab.
1. Select “NDK” from the list and click OK.
1. A prompt appears asking you to confirm the change. Do so by clicking OK.
1. Accept the NDK license agreement.
1. The NDK component is being installed, grab another drink.
1. After the installation has finished, click Finish. The installation is now complete.

### Setting up Windows for Android builds

#### 1. Install Python, CMake, Git, and JDK 8

1. Download and install Python3 from https://www.python.org/downloads/ (ca. 25MB).
	
	> Important: Make sure to activate the “Add Python to PATH" checkbox at the bottom of the installer window.

1. Download and install CMake from https://cmake.org/download/ (ca. 19MB). We recommend using the latest win64-x64 stable release installer binary.

1. Download and install git from https://git-scm.com/download/win (ca. 42MB). If you’re unsure about the available options presented in the installer, just keep the default settings.

	> Important: When installing CMake, make sure to choose “Add the Cmake binary to the PATH environment variable”.

1. Dowload and install JDK 8 from https://www.oracle.com/technetwork/java/javase/downloads/jdk8-downloads-2133151.html (ca. 200MB).

#### 2. Install Android Studio

##### 2.1 Download and Install Android Studio

1. Download Android Studio from https://developer.android.com/studio/ (ca. 1GB) and start the downloaded EXE file.
2. Follow the steps in the setup wizard.
3. Stay on the "Welcome to Android" screen and complete the steps below to complete the installation.

> For Boden, it's sufficient to select the default setup type in the Android Studio Setup wizard. When asked, grant permission to the Intel HAXM installer to allow for Android device emulation.

##### 2.2 Install Android NDK

1. On the “Welcome to Android” screen, click Configure and select SDK Manager.
1. Click on the SDK Tools tab.
1. Select NDK from the list and click OK.
1. Confirm the change by clicking OK in the popup window.
1. Accept the NDK license agreement.
1. The NDK component is being installed, grab another drink.
1. After the installation has finished, click Finish. The installation is now complete.