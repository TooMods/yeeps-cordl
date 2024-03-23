#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CryptoUtilFactory)
namespace Amazon::Runtime {
struct SigningAlgorithm;
}
namespace Amazon::Util {
class ICryptoUtil;
}
namespace Amazon::Util {
class __CryptoUtilFactory__CryptoUtil;
}
namespace System::IO {
class Stream;
}
namespace System::Security::Cryptography {
class HashAlgorithm;
}
namespace System::Security::Cryptography {
class KeyedHashAlgorithm;
}
// Forward declare root types
namespace Amazon::Util {
class CryptoUtilFactory;
}
namespace Amazon::Util {
class __CryptoUtilFactory__CryptoUtil;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Util::CryptoUtilFactory);
MARK_REF_PTR_T(::Amazon::Util::__CryptoUtilFactory__CryptoUtil);
// Type: ::CryptoUtil
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Util {
// Is value type: false
// CS Name: ::CryptoUtilFactory::CryptoUtil*
class CORDL_TYPE __CryptoUtilFactory__CryptoUtil : public ::System::Object {
public:
  // Declarations
  /// @brief Field _hashAlgorithm, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__hashAlgorithm, put = setStaticF__hashAlgorithm))::System::Security::Cryptography::HashAlgorithm* _hashAlgorithm;

  /// @brief Convert operator to "::Amazon::Util::ICryptoUtil"
  constexpr operator ::Amazon::Util::ICryptoUtil*() noexcept;

  /// @brief Method ComputeMD5Hash, addr 0x2205b34, size 0x68, virtual true, abstract: false, final true
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ComputeMD5Hash(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method ComputeMD5Hash, addr 0x2205b9c, size 0x68, virtual true, abstract: false, final true
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ComputeMD5Hash(::System::IO::Stream* steam);

  /// @brief Method ComputeSHA1Hash, addr 0x2205824, size 0x198, virtual true, abstract: false, final true
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ComputeSHA1Hash(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method ComputeSHA256Hash, addr 0x22059bc, size 0x64, virtual true, abstract: false, final true
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ComputeSHA256Hash(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method ComputeSHA256Hash, addr 0x2205ad0, size 0x64, virtual true, abstract: false, final true
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ComputeSHA256Hash(::System::IO::Stream* steam);

  /// @brief Method CreateKeyedHashAlgorithm, addr 0x22056fc, size 0x128, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::KeyedHashAlgorithm* CreateKeyedHashAlgorithm(::Amazon::Runtime::SigningAlgorithm algorithmName);

  /// @brief Method HMACSign, addr 0x22054bc, size 0x240, virtual true, abstract: false, final true
  inline ::StringW HMACSign(::ArrayW<uint8_t, ::Array<uint8_t>*> data, ::StringW key, ::Amazon::Runtime::SigningAlgorithm algorithmName);

  /// @brief Method HMACSign, addr 0x220545c, size 0x60, virtual true, abstract: false, final true
  inline ::StringW HMACSign(::StringW data, ::StringW key, ::Amazon::Runtime::SigningAlgorithm algorithmName);

  /// @brief Method HMACSignBinary, addr 0x2205c04, size 0x1b4, virtual true, abstract: false, final true
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> HMACSignBinary(::ArrayW<uint8_t, ::Array<uint8_t>*> data, ::ArrayW<uint8_t, ::Array<uint8_t>*> key, ::Amazon::Runtime::SigningAlgorithm algorithmName);

  static inline ::Amazon::Util::__CryptoUtilFactory__CryptoUtil* New_ctor();

  /// @brief Method .ctor, addr 0x2205454, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Security::Cryptography::HashAlgorithm* getStaticF__hashAlgorithm();

  /// @brief Method get_SHA256HashAlgorithmInstance, addr 0x2205a20, size 0xb0, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::HashAlgorithm* get_SHA256HashAlgorithmInstance();

  /// @brief Convert to "::Amazon::Util::ICryptoUtil"
  constexpr ::Amazon::Util::ICryptoUtil* i___Amazon__Util__ICryptoUtil() noexcept;

  static inline void setStaticF__hashAlgorithm(::System::Security::Cryptography::HashAlgorithm* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __CryptoUtilFactory__CryptoUtil();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__CryptoUtilFactory__CryptoUtil", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __CryptoUtilFactory__CryptoUtil(__CryptoUtilFactory__CryptoUtil&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__CryptoUtilFactory__CryptoUtil", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __CryptoUtilFactory__CryptoUtil(__CryptoUtilFactory__CryptoUtil const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Util::__CryptoUtilFactory__CryptoUtil, 0x10>, "Size mismatch!");

} // namespace Amazon::Util
// Type: Amazon.Util::CryptoUtilFactory
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Util {
// Is value type: false
// CS Name: ::Amazon.Util::CryptoUtilFactory*
class CORDL_TYPE CryptoUtilFactory : public ::System::Object {
public:
  // Declarations
  using CryptoUtil = ::Amazon::Util::__CryptoUtilFactory__CryptoUtil;

  /// @brief Field util, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_util, put = setStaticF_util))::Amazon::Util::__CryptoUtilFactory__CryptoUtil* util;

  static inline ::Amazon::Util::__CryptoUtilFactory__CryptoUtil* getStaticF_util();

  /// @brief Method get_CryptoInstance, addr 0x2205384, size 0x58, virtual false, abstract: false, final false
  static inline ::Amazon::Util::ICryptoUtil* get_CryptoInstance();

  static inline void setStaticF_util(::Amazon::Util::__CryptoUtilFactory__CryptoUtil* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CryptoUtilFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CryptoUtilFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CryptoUtilFactory(CryptoUtilFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CryptoUtilFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CryptoUtilFactory(CryptoUtilFactory const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Util::CryptoUtilFactory, 0x10>, "Size mismatch!");

} // namespace Amazon::Util
NEED_NO_BOX(::Amazon::Util::CryptoUtilFactory);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Util::CryptoUtilFactory*, "Amazon.Util", "CryptoUtilFactory");
NEED_NO_BOX(::Amazon::Util::__CryptoUtilFactory__CryptoUtil);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Util::__CryptoUtilFactory__CryptoUtil*, "Amazon.Util", "CryptoUtilFactory/CryptoUtil");
