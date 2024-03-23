#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/Internal/Util/zzzz__DecryptStream_1_def.hpp"
#include "Amazon/Runtime/Internal/Util/zzzz__DecryptionWrapperAES_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AESDecryptionStream)
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Amazon::Runtime::Internal::Util {
class AESDecryptionStream;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::Util::AESDecryptionStream);
// Type: Amazon.Runtime.Internal.Util::AESDecryptionStream
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Util {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal.Util::AESDecryptionStream*
class CORDL_TYPE AESDecryptionStream : public ::Amazon::Runtime::Internal::Util::DecryptStream_1<::Amazon::Runtime::Internal::Util::DecryptionWrapperAES*> {
public:
  // Declarations
  static inline ::Amazon::Runtime::Internal::Util::AESDecryptionStream* New_ctor(::System::IO::Stream* baseStream, ::ArrayW<uint8_t, ::Array<uint8_t>*> key, ::ArrayW<uint8_t, ::Array<uint8_t>*> IV);

  /// @brief Method .ctor, addr 0x23f47bc, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* baseStream, ::ArrayW<uint8_t, ::Array<uint8_t>*> key, ::ArrayW<uint8_t, ::Array<uint8_t>*> IV);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AESDecryptionStream();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AESDecryptionStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AESDecryptionStream(AESDecryptionStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AESDecryptionStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AESDecryptionStream(AESDecryptionStream const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::Util::AESDecryptionStream, 0x40>, "Size mismatch!");

} // namespace Amazon::Runtime::Internal::Util
NEED_NO_BOX(::Amazon::Runtime::Internal::Util::AESDecryptionStream);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Util::AESDecryptionStream*, "Amazon.Runtime.Internal.Util", "AESDecryptionStream");
