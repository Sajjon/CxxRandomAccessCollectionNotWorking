//
//  ConsumerSwift.swift
//  LibConsumer
//
//  Created by Alexander Cyon on 2023-07-19.
//

import Foundation

@main
public struct ClientConsumer {
	public static func main() {
		let result = foo()
		print("Result: \(result)")
		
		// COMPILATION ERROR: For-in loop requires 'std.__1.vector<basic_string<Int8, char_traits<Int8>, allocator<Int8>>, allocator<basic_string<Int8, char_traits<Int8>, allocator<Int8>>>>' to conform to 'Sequence'
		for string in fooVector() {
			print(string)
		}
	}
}
