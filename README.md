

### PWR Coin (Phoenix) <img src="https://d25lcipzij17d.cloudfront.net/badge.svg?id=gh&type=6&v=3.1.0.0&x2=0">

<p style="text-align:center;"><img src="https://github.com/DisasterFaster/PWRcoin/blob/phoenix/images/PWR-Coin-1.jpg"></p>

## Important Links

  * Block explorer https://blockexplorer.pwr-coin.com
  * Website https://pwr-coin.com
  * White Paper https://pwr-coin.com/downloads/PWR-Coin-White-Paper.pdf
  * Paper Wallet https://paperwallet.pwr-coin.com
  * Online Wallet https://online-wallet.pwr-coin.com
  * Bitcointalk ANN https://bitcointalk.org/index.php?topic=2868184.100
  * Crex24 Exchange https://crex24.com/exchange/PWR-BTC
  * Mercatox Exchange https://mercatox.com/exchange/PWR/BTC
  * Hash Pool EU Mining Pool https://hashpool.eu
  * Coin Mining Pool https://coinminingpool.org
  * Market cap statistics https://coinmarketcap.com/currencies/powercoin
  * Market cap statistics https://cryptocapworld.com/coin/PWR
  * Facebook https://www.facebook.com/pwrcoin
  * Twitter https://twitter.com/pwr_coin
  * Google Plus https://plus.google.com/u/0/b/111766350022342218047/111766350022342218047
  * YouTube https://www.youtube.com/channel/UCVb0ZIaNjIjZc6HLE0RwVlg
  * Discord channel https://discord.gg/8jhcqqs
  * Reddit https://www.reddit.com/r/PWRcoin
  * Telegram https://t.me/pwr_coin_official
  * Telegram Announcement Channel: https://t.me/pwr_coin

## PWR Coin Specifications

```
Name: PWR Coin
Ticker: PWR
Maturity: 40 Blocks
Block Size: 2MB
Block time: 30 seconds
POW Algo: Nist5
POS: single POS payout is 100 coins
Port: 22504
Rpcport: 22502  
Max Supply: 12,427,419,639 PWR

POW Block Reward:
- block  262850  -> 180 COINS - 3 months
- block  525650  -> 150 COINS - 3 months
- block 1051250  -> 120 COINS - 6 months
- block 2102450  -> 100 COINS - 1 year
- block 3153650  ->  90 COINS - 1 year
- block 4204850  ->  80 COINS - 1 year
- block 5256050  ->  70 COINS - 1 year
- block 6307250 and up  ->  65 COINS 


```

## Wallet Instructions

## PWR Coin Linux QT Compiled With Ubuntu 16.04.4 x86_64 
Install dependencies
---------------------
When running the commands in the build instructions below, copy and paste one line and let it complete before running the next line. Watch for prompts in case you need to respond to a requested input and also to watch for any errors if they occur.

```
sudo add-apt-repository universe
sudo add-apt-repository ppa:bitcoin/bitcoin
sudo apt-get update
sudo apt-get install build-essential make g++
sudo apt-get install libssl-dev libboost-all-dev libqrencode-dev libminiupnpc-dev software-properties-common libdb4.8-dev libdb4.8++-dev
sudo apt-get install libqt5gui5 libqt5core5a libqt5dbus5 qttools5-dev qtbase5-dev-tools qt5-qmake qt5-default qttools5-dev-tools libprotobuf-dev protobuf-compiler
```

Get the source and compile
--------------------------

```
git clone https://github.com/PWRcoin/PWRcoin.git pwrcoin
cd pwrcoin
qmake
make

```
**Note:** *It's possible the compile may fail and give an error message that you have run out of memory. If this happens please follow the steps below to create a swap file:*  

```
fallocate -l 2G /swapfile
chown root:root /swapfile
chmod 0600 /swapfile
sudo bash -c "echo 'vm.swappiness = 10' >> /etc/sysctl.conf"
mkswap /swapfile
swapon /swapfile
```
After creating the swap file above run the folowing commands again:

```
qmake
make
```

Setup And Launch The QT
---------------------
From the command line:
```
./pwrcoin-qt
```
From the desktop GUI:
```
Double click the PWRcoin-QT icon wherever you have it located in your system
```

**Note:** *The above will launch the QT and create some necessary files however it will fail and close and will have to be restarted a second time. From then on it will launch with no failures:*

Navigate to the location on your computer where the pwrcoin.conf file will need to be setup at - you will know you are in the right folder because the wallet.dat file will be in there:

Create a new file called pwrcoin.conf and add the following lines:

```
addnode=SomeIPAddressHere
addnode=SomeIPAddressHere
addnode=SomeIPAddressHere
addnode=SomeIPAddressHere
addnode=SomeIPAddressHere
```
You will need to replace SomeIPAddressHere with IP addresses that you can find here https://blockexplorer.pwr-coin.com/network

After you add the IP addresses save the pwrcoin.conf file and then you will need to restart the QT wallet for the changes to take effect. You will now note that your wallet is sychronizing the blockchain. If your wallet will not begin to synchronize you should try adding some more/different IP addresses in the pwrcoin.conf file. If your wallet partially synchronizes but then stops at some point and won't progress you should shut it down and restart it. Once your QT wallet is fully synchronized you should check and make sure that the wallet block number matches the block height on the official block eplorer at https://blockexplorer.pwr-coin.com/

---------------------
---------------------

## PWR Coin Linux Daemon Compiled With Ubuntu 16.04.4 x86_64 (Tested 3-19-2018) ##

Install dependencies
---------------------
When running the commands in the build instructions below, copy and paste one line and let it complete before running the next line. Watch for prompts in case you need to respond to a requested input and also to watch for any errors if they occur.

```
sudo add-apt-repository universe
sudo add-apt-repository ppa:bitcoin/bitcoin
sudo apt-get update
sudo apt-get install build-essential make g++
sudo apt-get install libssl-dev libboost-all-dev libqrencode-dev libminiupnpc-dev software-properties-common libdb4.8-dev libdb4.8++-dev
sudo apt-get install libqt5gui5 libqt5core5a libqt5dbus5 qttools5-dev qtbase5-dev-tools qt5-qmake qt5-default qttools5-dev-tools libprotobuf-dev protobuf-compiler
```

Get The Source Code And Compile
---------------------

```
git clone https://github.com/PWRcoin/PWRcoin.git pwrcoin
cd pwrcoin/src
make clean -f makefile.unix
make -f makefile.unix

```
**Note:** *It's possible the compile may fail and give an error message that you have run out of memory. If this happens please follow the steps below to create a swap file:*  

```
fallocate -l 2G /swapfile
chown root:root /swapfile
chmod 0600 /swapfile
sudo bash -c "echo 'vm.swappiness = 10' >> /etc/sysctl.conf"
mkswap /swapfile
swapon /swapfile
```
After creating the swap file above run the folowing commands again:

```
make clean -f makefile.unix
make -f makefile.unix
```

Setup And Launch The Daemon
---------------------

```
./pwrcoind -daemon 
```
**Note:** *The above command will launch the daemon and create some necessary files however it will fail with a complaint that your pwrcoin.conf file is not setup properly:*

Navigate to the default location where the pwrcoin.conf file will need to be setup at:  ``` /root/.pwrcoin/ ```

Once you are inside the ``` .pwrcoin/ ``` directory you will need to create and setup the pwrcoin.conf file:

```
sudo nano pwrcoin.conf
```

The bare minimum pwrcoin.conf configuration required to get the daemon running is:

```
rpcuser=PutRpcUserHere
rpcpassword=PutPasswordHere
```
**Note:** *The rpcuser and rpcpassword can't be the same they must be different from one another!*

While each pwrcoin.conf file may need different setup depending on what you are doing a typical configuration might look like this:

```
rpcuser=PutRpcUserHere
rpcpassword=PutPasswordHere
rpcallowip=127.0.0.1   
daemon=1
listen=1
server=1
addnode=SomeIPAddressHere
addnode=SomeIPAddressHere
addnode=SomeIPAddressHere
addnode=SomeIPAddressHere
addnode=SomeIPAddressHere
```

Now that you have created, setup and saved the pwrcoin.conf file you should set it to read only:

```
sudo chmod 400 pwrcoin.conf
```

Now you will need to navigate back to the directory where the PWR coin daemon is.

Once you are in the proper directory where the daemon is located you are ready to launch again:

```
./pwrcoind 
```

You should get a message that says, "pwrcoin server starting."

Give it a few seconds and check that it is running:

```
./pwrcoind getinfo
```
You should get a full response with all of the getinfo output. If you take a look at "blocks": make a note of the block number.

Let the daemon run for several more minutes and once again check it with:

```
./pwrcoind getinfo
```

You should compare the block number now to the last one you saw and you should see it climbing higher because it is synchronizing the blockchain. If the number stays at 0 you need to revisit your pwrcoin.conf file and try some different addnodes. A good place to get those is here https://blockexplorer.pwr-coin.com/network

Let your daemon run and check it periodically. Once the block number in getinfo matches the block number on the block explorer you are fully synchronized. If you notice that your daemon reaches a certain block height but then stops synchronizing for any reason it's always a good idea to try stopping and restarting it using the commands listed below:

If for any reason you want to stop the daemon from running use this command:

```
./pwrcoind stop
```

If for any reason you need to start the daemon use this command:

```
./pwrcoind -daemon
```
