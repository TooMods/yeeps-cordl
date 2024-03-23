#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/Internal/Util/zzzz__EncryptUploadPartStream_1_def.hpp"
#include "Amazon/Runtime/Internal/Util/zzzz__EncryptionWrapperAES_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AESEncryptionUploadPartStream)
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Amazon::Runtime::Internal::Util {
class AESEncryptionUploadPartStream;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::Util::AESEncryptionUploadPartStream);
// Type: Amazon.Runtime.Internal.Util::AESEncryptionUploadPartStream
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Util {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal.Util::AESEncryptionUploadPartStream*
class CORDL_TYPE AESEncryptionUploadPartStream : public ::Amazon::Runtime::Internal::Util::EncryptUploadPartStream_1<::Amazon::Runtime::Internal::Util::EncryptionWrapperAES*> {
public:
  // Declarations
  static inline ::Amazon::Runtime::Internal::Util::AESEncryptionUploadPartStream* New_ctor(::System::IO::Stream* baseStream, ::ArrayW<uint8_t, ::Array<uint8_t>*> key,
                                                                                           ::ArrayW<uint8_t, ::Array<uint8_t>*> IV);

  /// @brief Method .ctor, addr 0x24379c4, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* baseStream, ::ArrayW<uint8_t, ::Array<uint8_t>*> key, ::ArrayW<uint8_t, ::Array<uint8_t>*> IV);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AESEncryptionUploadPartStream();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AESEncryptionUploadPartStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AESEncryptionUploadPartStream(AESEncryptionUploadPartStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AESEncryptionUploadPartStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AESEncryptionUploadPartStream(AESEncryptionUploadPartStream const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::Util::AESEncryptionUploadPartStream, 0x48>, "Size mismatch!");

} // namespace Amazon::Runtime::Internal::Util
NEED_NO_BOX(::Amazon::Runtime::Internal::Util::AESEncryptionUploadPartStream);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Util::AESEncryptionUploadPartStream*, "Amazon.Runtime.Internal.Util", "AESEncryptionUploadPartStream");
