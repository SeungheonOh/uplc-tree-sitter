package tree_sitter_uplc_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_uplc "github.com/tree-sitter/tree-sitter-uplc/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_uplc.Language())
	if language == nil {
		t.Errorf("Error loading Uplc grammar")
	}
}
