let addon = require("../src/addon.js")

describe('meldCX',()=>{

	it("Should return the number of attached displays.", () => {
		expect(addon.display()).toEqual(expect.any(Number));
	});
	
	it("Should display number greater then 0.", () => {
		expect(addon.display()).toBeGreaterThan(0);
	});
	
	it("Should go to sleep.", () => {
		expect(addon.sleep()).toBe(true);
	});
	
	it("Should wake up .", () => {
		expect(addon.wake()).toBe(true);
	});
	
	it("Should give last Input Time.", () => {
		expect(addon.lastInputTime()).toEqual(expect.any(Number));
	});

})
