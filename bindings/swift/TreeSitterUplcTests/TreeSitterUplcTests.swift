import XCTest
import SwiftTreeSitter
import TreeSitterUplc

final class TreeSitterUplcTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_uplc())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Uplc grammar")
    }
}
