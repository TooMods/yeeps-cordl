#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IEncryptionWrapper)
// Forward declare root types
namespace Amazon::Runtime::Internal::Util {
class IEncryptionWrapper;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::Util::IEncryptionWrapper);
// Type: Amazon.Runtime.Internal.Util::IEncryptionWrapper
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Util {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal.Util::IEncryptionWrapper*
class CORDL_TYPE IEncryptionWrapper {
public:
  // Declarations
  /// @brief Method AppendBlock, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t AppendBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count, ::ArrayW<uint8_t, ::Array<uint8_t>*> target, int32_t targetOffset);

  /// @brief Method AppendLastBlock, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> AppendLastBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method CreateEncryptor, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void CreateEncryptor();

  /// @brief Method Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Reset();

  /// @brief Method SetEncryptionData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetEncryptionData(::ArrayW<uint8_t, ::Array<uint8_t>*> key, ::ArrayW<uint8_t, ::Array<uint8_t>*> IV);

  // Ctor Parameters [CppParam { name: "", ty: "IEncryptionWrapper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IEncryptionWrapper(IEncryptionWrapper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IEncryptionWrapper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IEncryptionWrapper(IEncryptionWrapper const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::Runtime::Internal::Util
NEED_NO_BOX(::Amazon::Runtime::Internal::Util::IEncryptionWrapper);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Util::IEncryptionWrapper*, "Amazon.Runtime.Internal.Util", "IEncryptionWrapper");
