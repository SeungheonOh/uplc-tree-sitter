// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterUplc",
    products: [
        .library(name: "TreeSitterUplc", targets: ["TreeSitterUplc"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterUplc",
            dependencies: [],
            path: ".",
            sources: [
                "src/parser.c",
                // NOTE: if your language has an external scanner, add it here.
            ],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterUplcTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterUplc",
            ],
            path: "bindings/swift/TreeSitterUplcTests"
        )
    ],
    cLanguageStandard: .c11
)
