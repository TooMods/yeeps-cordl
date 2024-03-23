#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/Internal/Util/zzzz__EncryptStream_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EncryptStream_1)
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Amazon::Runtime::Internal::Util {
template <typename T> class EncryptStream_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Amazon::Runtime::Internal::Util::EncryptStream_1);
// Type: Amazon.Runtime.Internal.Util::EncryptStream`1
// SizeInfo { instance_size: 72, native_size: 65, calculated_instance_size: 72, calculated_native_size: 65, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Util {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal.Util::EncryptStream`1<T>*
class CORDL_TYPE EncryptStream_1 : public ::Amazon::Runtime::Internal::Util::EncryptStream {
public:
  // Declarations
  static inline ::Amazon::Runtime::Internal::Util::EncryptStream_1<T>* New_ctor(::System::IO::Stream* baseStream, ::ArrayW<uint8_t, ::Array<uint8_t>*> key, ::ArrayW<uint8_t, ::Array<uint8_t>*> IV);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* baseStream, ::ArrayW<uint8_t, ::Array<uint8_t>*> key, ::ArrayW<uint8_t, ::Array<uint8_t>*> IV);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EncryptStream_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EncryptStream_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EncryptStream_1(EncryptStream_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EncryptStream_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EncryptStream_1(EncryptStream_1 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::Runtime::Internal::Util
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Amazon::Runtime::Internal::Util::EncryptStream_1, "Amazon.Runtime.Internal.Util", "EncryptStream`1");
