#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/zzzz__WebReadStream_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ContentDecodeStream)
namespace System::IO {
class Stream;
}
namespace System::Net {
class WebOperation;
}
namespace System::Net {
struct __ContentDecodeStream__Mode;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
struct CancellationToken;
}
// Forward declare root types
namespace System::Net {
struct __ContentDecodeStream__Mode;
}
namespace System::Net {
class ContentDecodeStream;
}
// Write type traits
MARK_VAL_T(::System::Net::__ContentDecodeStream__Mode);
MARK_REF_PTR_T(::System::Net::ContentDecodeStream);
// Type: ::Mode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: true
// CS Name: ::ContentDecodeStream::Mode
struct CORDL_TYPE __ContentDecodeStream__Mode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____ContentDecodeStream__Mode_Unwrapped
  enum struct ____ContentDecodeStream__Mode_Unwrapped : int32_t {
    __E_GZip = static_cast<int32_t>(0x0),
    __E_Deflate = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____ContentDecodeStream__Mode_Unwrapped() const noexcept {
    return static_cast<____ContentDecodeStream__Mode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ContentDecodeStream__Mode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __ContentDecodeStream__Mode(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Deflate value: static_cast<int32_t>(0x1)
  static ::System::Net::__ContentDecodeStream__Mode const Deflate;

  /// @brief Field GZip value: static_cast<int32_t>(0x0)
  static ::System::Net::__ContentDecodeStream__Mode const GZip;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::__ContentDecodeStream__Mode, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Net::__ContentDecodeStream__Mode, value__) == 0x0, "Offset mismatch!");

} // namespace System::Net
// Type: System.Net::ContentDecodeStream
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// CS Name: ::System.Net::ContentDecodeStream*
class CORDL_TYPE ContentDecodeStream : public ::System::Net::WebReadStream {
public:
  // Declarations
  using Mode = ::System::Net::__ContentDecodeStream__Mode;

  __declspec(property(get = get_OriginalInnerStream))::System::IO::Stream* OriginalInnerStream;

  /// @brief Field <OriginalInnerStream>k__BackingField, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__OriginalInnerStream_k__BackingField,
                      put = __cordl_internal_set__OriginalInnerStream_k__BackingField))::System::IO::Stream* _OriginalInnerStream_k__BackingField;

  /// @brief Method Create, addr 0x1033668, size 0xec, virtual false, abstract: false, final false
  static inline ::System::Net::ContentDecodeStream* Create(::System::Net::WebOperation* operation, ::System::IO::Stream* innerStream, ::System::Net::__ContentDecodeStream__Mode mode);

  /// @brief Method FinishReading, addr 0x10337a8, size 0xf0, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* FinishReading(::System::Threading::CancellationToken cancellationToken);

  static inline ::System::Net::ContentDecodeStream* New_ctor(::System::Net::WebOperation* operation, ::System::IO::Stream* decodeStream, ::System::IO::Stream* originalInnerStream);

  /// @brief Method ProcessReadAsync, addr 0x1033784, size 0x24, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<int32_t>* ProcessReadAsync(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size,
                                                                       ::System::Threading::CancellationToken cancellationToken);

  constexpr ::System::IO::Stream*& __cordl_internal_get__OriginalInnerStream_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> const& __cordl_internal_get__OriginalInnerStream_k__BackingField() const;

  constexpr void __cordl_internal_set__OriginalInnerStream_k__BackingField(::System::IO::Stream* value);

  /// @brief Method .ctor, addr 0x1033754, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Net::WebOperation* operation, ::System::IO::Stream* decodeStream, ::System::IO::Stream* originalInnerStream);

  /// @brief Method get_OriginalInnerStream, addr 0x103377c, size 0x8, virtual false, abstract: false, final false
  inline ::System::IO::Stream* get_OriginalInnerStream();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ContentDecodeStream();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ContentDecodeStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ContentDecodeStream(ContentDecodeStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ContentDecodeStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ContentDecodeStream(ContentDecodeStream const&) = delete;

  /// @brief Field <OriginalInnerStream>k__BackingField, offset: 0x40, size: 0x8, def value: None
  ::System::IO::Stream* ____OriginalInnerStream_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::ContentDecodeStream, 0x48>, "Size mismatch!");

static_assert(offsetof(::System::Net::ContentDecodeStream, ____OriginalInnerStream_k__BackingField) == 0x40, "Offset mismatch!");

} // namespace System::Net
DEFINE_IL2CPP_ARG_TYPE(::System::Net::__ContentDecodeStream__Mode, "System.Net", "ContentDecodeStream/Mode");
NEED_NO_BOX(::System::Net::ContentDecodeStream);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::ContentDecodeStream*, "System.Net", "ContentDecodeStream");
