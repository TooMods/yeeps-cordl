#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/Internal/Util/zzzz__EncryptionWrapper_def.hpp"
CORDL_MODULE_EXPORT(EncryptionWrapperAES)
namespace System::Security::Cryptography {
class SymmetricAlgorithm;
}
// Forward declare root types
namespace Amazon::Runtime::Internal::Util {
class EncryptionWrapperAES;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::Util::EncryptionWrapperAES);
// Type: Amazon.Runtime.Internal.Util::EncryptionWrapperAES
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Util {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal.Util::EncryptionWrapperAES*
class CORDL_TYPE EncryptionWrapperAES : public ::Amazon::Runtime::Internal::Util::EncryptionWrapper {
public:
  // Declarations
  /// @brief Method CreateAlgorithm, addr 0x23f4cb0, size 0x50, virtual true, abstract: false, final false
  inline ::System::Security::Cryptography::SymmetricAlgorithm* CreateAlgorithm();

  static inline ::Amazon::Runtime::Internal::Util::EncryptionWrapperAES* New_ctor();

  /// @brief Method .ctor, addr 0x23f4c84, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EncryptionWrapperAES();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EncryptionWrapperAES", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EncryptionWrapperAES(EncryptionWrapperAES&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EncryptionWrapperAES", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EncryptionWrapperAES(EncryptionWrapperAES const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::Util::EncryptionWrapperAES, 0x20>, "Size mismatch!");

} // namespace Amazon::Runtime::Internal::Util
NEED_NO_BOX(::Amazon::Runtime::Internal::Util::EncryptionWrapperAES);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Util::EncryptionWrapperAES*, "Amazon.Runtime.Internal.Util", "EncryptionWrapperAES");
