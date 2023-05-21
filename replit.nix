{ pkgs }: {
	deps = [
  pkgs.pfetch
  pkgs.nix-bundle
  pkgs.clang_12
		pkgs.ccls
		pkgs.gdb
		pkgs.gnumake
		pkgs.jsoncpp
	];
}