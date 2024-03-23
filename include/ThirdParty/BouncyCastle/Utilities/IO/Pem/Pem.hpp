#ifdef __cpp_modules
module;
#endif

#pragma once
#include "ThirdParty/BouncyCastle/Utilities/IO/Pem/PemGenerationException.hpp"
#include "ThirdParty/BouncyCastle/Utilities/IO/Pem/PemHeader.hpp"
#include "ThirdParty/BouncyCastle/Utilities/IO/Pem/PemObject.hpp"
#include "ThirdParty/BouncyCastle/Utilities/IO/Pem/PemObjectGenerator.hpp"
#include "ThirdParty/BouncyCastle/Utilities/IO/Pem/PemObjectParser.hpp"
#include "ThirdParty/BouncyCastle/Utilities/IO/Pem/PemReader.hpp"
#ifdef __cpp_modules
export module Pem;
#endif
