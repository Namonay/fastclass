{
	description = "Fastclass flake";
	inputs = {
		nixpkgs.url = "github:nixos/nixpkgs/nixos-24.11";
	};

	outputs = { self, nixpkgs, ... }:
	let
		supportedSystems = [ "x86_64-linux" ];
		forAllSystems = f: nixpkgs.lib.genAttrs supportedSystems (system: f {
			pkgs = import nixpkgs { inherit system; };
		});
	in
	{
		packages = forAllSystems ({ pkgs }: rec {
			default = fastclass;
			fastclass = pkgs.stdenv.mkDerivation {
				name = "fastclass";
				src = self;
				buildInputs = with pkgs; [
					clang
				];
				buildPhase = ''
					make
				'';
				installPhase = ''
					mkdir -p $out/bin
					cp class $out/bin
				'';
			};
		});
	};
}
