#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__Stream_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WrapperStream)
namespace System::IO {
struct SeekOrigin;
}
namespace System::IO {
class Stream;
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
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace Amazon::Runtime::Internal::Util {
class WrapperStream;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::Util::WrapperStream);
// Type: Amazon.Runtime.Internal.Util::WrapperStream
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Util {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal.Util::WrapperStream*
class CORDL_TYPE WrapperStream : public ::System::IO::Stream {
public:
  // Declarations
  __declspec(property(get = get_BaseStream, put = set_BaseStream))::System::IO::Stream* BaseStream;

  __declspec(property(get = get_CanRead)) bool CanRead;

  __declspec(property(get = get_CanSeek)) bool CanSeek;

  __declspec(property(get = get_CanWrite)) bool CanWrite;

  __declspec(property(get = get_HasLength)) bool HasLength;

  __declspec(property(get = get_Length)) int64_t Length;

  __declspec(property(get = get_Position, put = set_Position)) int64_t Position;

  __declspec(property(get = get_ReadTimeout, put = set_ReadTimeout)) int32_t ReadTimeout;

  __declspec(property(get = get_WriteTimeout, put = set_WriteTimeout)) int32_t WriteTimeout;

  /// @brief Field <BaseStream>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__BaseStream_k__BackingField, put = __cordl_internal_set__BaseStream_k__BackingField))::System::IO::Stream* _BaseStream_k__BackingField;

  /// @brief Method Dispose, addr 0x2447c3c, size 0x2c, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method Flush, addr 0x2447cf8, size 0x24, virtual true, abstract: false, final false
  inline void Flush();

  /// @brief Method FlushAsync, addr 0x2447d88, size 0x24, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* FlushAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method GetNonWrapperBaseStream, addr 0x24477dc, size 0xfc, virtual false, abstract: false, final false
  inline ::System::IO::Stream* GetNonWrapperBaseStream();

  /// @brief Method GetNonWrapperBaseStream, addr 0x24479fc, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::IO::Stream* GetNonWrapperBaseStream(::System::IO::Stream* stream);

  /// @brief Method GetSeekableBaseStream, addr 0x24478d8, size 0x124, virtual false, abstract: false, final false
  inline ::System::IO::Stream* GetSeekableBaseStream();

  static inline ::Amazon::Runtime::Internal::Util::WrapperStream* New_ctor(::System::IO::Stream* baseStream);

  /// @brief Method Read, addr 0x24392dc, size 0x24, virtual true, abstract: false, final false
  inline int32_t Read(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method ReadAsync, addr 0x24398b0, size 0x24, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<int32_t>* ReadAsync(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method SearchWrappedStream, addr 0x2447a88, size 0xa8, virtual false, abstract: false, final false
  inline ::System::IO::Stream* SearchWrappedStream(::System::Func_2<::System::IO::Stream*, bool>* condition);

  /// @brief Method SearchWrappedStream, addr 0x2447b30, size 0xac, virtual false, abstract: false, final false
  static inline ::System::IO::Stream* SearchWrappedStream(::System::IO::Stream* stream, ::System::Func_2<::System::IO::Stream*, bool>* condition);

  /// @brief Method Seek, addr 0x2447d1c, size 0x24, virtual true, abstract: false, final false
  inline int64_t Seek(int64_t offset, ::System::IO::SeekOrigin origin);

  /// @brief Method SetLength, addr 0x2447d40, size 0x24, virtual true, abstract: false, final false
  inline void SetLength(int64_t value);

  /// @brief Method Write, addr 0x2447d64, size 0x24, virtual true, abstract: false, final false
  inline void Write(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method WriteAsync, addr 0x2447dac, size 0x24, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* WriteAsync(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count, ::System::Threading::CancellationToken cancellationToken);

  constexpr ::System::IO::Stream*& __cordl_internal_get__BaseStream_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> const& __cordl_internal_get__BaseStream_k__BackingField() const;

  constexpr void __cordl_internal_set__BaseStream_k__BackingField(::System::IO::Stream* value);

  /// @brief Method .ctor, addr 0x2437b90, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* baseStream);

  /// @brief Method get_BaseStream, addr 0x24477cc, size 0x8, virtual false, abstract: false, final false
  inline ::System::IO::Stream* get_BaseStream();

  /// @brief Method get_CanRead, addr 0x2447bdc, size 0x20, virtual true, abstract: false, final false
  inline bool get_CanRead();

  /// @brief Method get_CanSeek, addr 0x2447bfc, size 0x20, virtual true, abstract: false, final false
  inline bool get_CanSeek();

  /// @brief Method get_CanWrite, addr 0x2447c1c, size 0x20, virtual true, abstract: false, final false
  inline bool get_CanWrite();

  /// @brief Method get_HasLength, addr 0x2447dd0, size 0x8, virtual true, abstract: false, final false
  inline bool get_HasLength();

  /// @brief Method get_Length, addr 0x24446c8, size 0x20, virtual true, abstract: false, final false
  inline int64_t get_Length();

  /// @brief Method get_Position, addr 0x2444718, size 0x20, virtual true, abstract: false, final false
  inline int64_t get_Position();

  /// @brief Method get_ReadTimeout, addr 0x2447c68, size 0x24, virtual true, abstract: false, final false
  inline int32_t get_ReadTimeout();

  /// @brief Method get_WriteTimeout, addr 0x2447cb0, size 0x24, virtual true, abstract: false, final false
  inline int32_t get_WriteTimeout();

  /// @brief Method set_BaseStream, addr 0x24477d4, size 0x8, virtual false, abstract: false, final false
  inline void set_BaseStream(::System::IO::Stream* value);

  /// @brief Method set_Position, addr 0x2444768, size 0x24, virtual true, abstract: false, final false
  inline void set_Position(int64_t value);

  /// @brief Method set_ReadTimeout, addr 0x2447c8c, size 0x24, virtual true, abstract: false, final false
  inline void set_ReadTimeout(int32_t value);

  /// @brief Method set_WriteTimeout, addr 0x2447cd4, size 0x24, virtual true, abstract: false, final false
  inline void set_WriteTimeout(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WrapperStream();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WrapperStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WrapperStream(WrapperStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WrapperStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WrapperStream(WrapperStream const&) = delete;

  /// @brief Field <BaseStream>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::System::IO::Stream* ____BaseStream_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::Util::WrapperStream, 0x30>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::WrapperStream, ____BaseStream_k__BackingField) == 0x28, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal::Util
NEED_NO_BOX(::Amazon::Runtime::Internal::Util::WrapperStream);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Util::WrapperStream*, "Amazon.Runtime.Internal.Util", "WrapperStream");
