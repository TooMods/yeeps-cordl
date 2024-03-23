#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ICryptoUtil)
namespace Amazon::Runtime {
struct SigningAlgorithm;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Amazon::Util {
class ICryptoUtil;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Util::ICryptoUtil);
// Type: Amazon.Util::ICryptoUtil
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Util {
// Is value type: false
// CS Name: ::Amazon.Util::ICryptoUtil*
class CORDL_TYPE ICryptoUtil {
public:
  // Declarations
  /// @brief Method ComputeMD5Hash, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ComputeMD5Hash(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method ComputeMD5Hash, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ComputeMD5Hash(::System::IO::Stream* steam);

  /// @brief Method ComputeSHA1Hash, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ComputeSHA1Hash(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method ComputeSHA256Hash, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ComputeSHA256Hash(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method ComputeSHA256Hash, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ComputeSHA256Hash(::System::IO::Stream* steam);

  /// @brief Method HMACSign, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW HMACSign(::ArrayW<uint8_t, ::Array<uint8_t>*> data, ::StringW key, ::Amazon::Runtime::SigningAlgorithm algorithmName);

  /// @brief Method HMACSign, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW HMACSign(::StringW data, ::StringW key, ::Amazon::Runtime::SigningAlgorithm algorithmName);

  /// @brief Method HMACSignBinary, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> HMACSignBinary(::ArrayW<uint8_t, ::Array<uint8_t>*> data, ::ArrayW<uint8_t, ::Array<uint8_t>*> key, ::Amazon::Runtime::SigningAlgorithm algorithmName);

  // Ctor Parameters [CppParam { name: "", ty: "ICryptoUtil", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ICryptoUtil(ICryptoUtil&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ICryptoUtil", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ICryptoUtil(ICryptoUtil const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::Util
NEED_NO_BOX(::Amazon::Util::ICryptoUtil);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Util::ICryptoUtil*, "Amazon.Util", "ICryptoUtil");
