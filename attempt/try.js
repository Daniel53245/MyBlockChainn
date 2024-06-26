
// Definition of block
const SHA256 = require('crypto-js/sha-256')


class Block {
    constructor(timestamp,data){
	//local of the block in the chain
	this.index = 0;
	//the time where the block is created
	this.timestamp = timestamp;
	//
	this.data = data;
	//integrity of the chain
	this.previous_hash = "0";
	this.hash = this.calculateHash();
	//related to mining mechanism
	this.nonce=0;
    }
    
    calculateHash(){
	return SHA256(this.index + this.previousHash + this.timestamp + this.data + this.nounce).toString();
    }

    mineBlock(diffculty){
	
    }
}

//The chain !!!
