package main

import (
	"errors"
	"fmt"
	"strconv"
)

const LOWERHEXDIFF = 87
const UPPERHEXDIFF = 55

func main() {

	hex := "0000F"
	decimal, err := htoi(hex)
	if err != nil {
		fmt.Println("fuckin aye")
	}

	fmt.Printf("Hex: %s\nDec: %d", hex, decimal)
}

func htoi(hexString string) (int, error) {
	sum := 0

	for i, v := range hexString {
		if v >= '0' && v <= '9' {
			val, err := strconv.Atoi(string(v))
			if err != nil {
				return 0, err

			}
			sum = 16*sum + val
		} else if v >= 'a' && v <= 'f' {
			val := int(hexString[i]) - LOWERHEXDIFF
			sum = 16*sum + (val)
		} else if v >= 'A' && v <= 'F' {
			val := int(hexString[i]) - UPPERHEXDIFF
			sum = 16*sum + (val)
		} else {
			err := errors.New("incorrectly formatted hex code")
			return 0, err
		}
	}

	return sum, nil
}
