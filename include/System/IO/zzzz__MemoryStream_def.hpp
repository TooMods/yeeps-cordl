#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__Stream_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MemoryStream)
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
namespace System::Threading::Tasks {
template <typename TResult> struct ValueTask_1;
}
namespace System::Threading::Tasks {
struct ValueTask;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
template <typename T> struct Memory_1;
}
namespace System {
template <typename T> struct ReadOnlyMemory_1;
}
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
namespace System {
template <typename T> struct Span_1;
}
// Forward declare root types
namespace System::IO {
class MemoryStream;
}
// Write type traits
MARK_REF_PTR_T(::System::IO::MemoryStream);
// Type: System.IO::MemoryStream
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::IO {
// Is value type: false
// CS Name: ::System.IO::MemoryStream*
class CORDL_TYPE MemoryStream : public ::System::IO::Stream {
public:
  // Declarations
  __declspec(property(get = get_CanRead)) bool CanRead;

  __declspec(property(get = get_CanSeek)) bool CanSeek;

  __declspec(property(get = get_CanWrite)) bool CanWrite;

  __declspec(property(get = get_Capacity, put = set_Capacity)) int32_t Capacity;

  __declspec(property(get = get_Length)) int64_t Length;

  __declspec(property(get = get_Position, put = set_Position)) int64_t Position;

  /// @brief Field _buffer, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__buffer, put = __cordl_internal_set__buffer))::ArrayW<uint8_t, ::Array<uint8_t>*> _buffer;

  /// @brief Field _capacity, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__capacity, put = __cordl_internal_set__capacity)) int32_t _capacity;

  /// @brief Field _expandable, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get__expandable, put = __cordl_internal_set__expandable)) bool _expandable;

  /// @brief Field _exposable, offset 0x42, size 0x1
  __declspec(property(get = __cordl_internal_get__exposable, put = __cordl_internal_set__exposable)) bool _exposable;

  /// @brief Field _isOpen, offset 0x43, size 0x1
  __declspec(property(get = __cordl_internal_get__isOpen, put = __cordl_internal_set__isOpen)) bool _isOpen;

  /// @brief Field _lastReadTask, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__lastReadTask, put = __cordl_internal_set__lastReadTask))::System::Threading::Tasks::Task_1<int32_t>* _lastReadTask;

  /// @brief Field _length, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__length, put = __cordl_internal_set__length)) int32_t _length;

  /// @brief Field _origin, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__origin, put = __cordl_internal_set__origin)) int32_t _origin;

  /// @brief Field _position, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__position, put = __cordl_internal_set__position)) int32_t _position;

  /// @brief Field _writable, offset 0x41, size 0x1
  __declspec(property(get = __cordl_internal_get__writable, put = __cordl_internal_set__writable)) bool _writable;

  /// @brief Method CopyTo, addr 0x2576784, size 0x150, virtual true, abstract: false, final false
  inline void CopyTo(::System::IO::Stream* destination, int32_t bufferSize);

  /// @brief Method CopyToAsync, addr 0x2576b14, size 0x328, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* CopyToAsync(::System::IO::Stream* destination, int32_t bufferSize, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method Dispose, addr 0x2575698, size 0x1c, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method EnsureCapacity, addr 0x25756b4, size 0xb0, virtual false, abstract: false, final false
  inline bool EnsureCapacity(int32_t value);

  /// @brief Method EnsureNotClosed, addr 0x2575628, size 0x34, virtual false, abstract: false, final false
  inline void EnsureNotClosed();

  /// @brief Method EnsureWriteable, addr 0x257565c, size 0x3c, virtual false, abstract: false, final false
  inline void EnsureWriteable();

  /// @brief Method Flush, addr 0x2575764, size 0x4, virtual true, abstract: false, final false
  inline void Flush();

  /// @brief Method FlushAsync, addr 0x2575768, size 0x174, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* FlushAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method GetBuffer, addr 0x25758dc, size 0x64, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetBuffer();

  /// @brief Method InternalEmulateRead, addr 0x2575a08, size 0x3c, virtual false, abstract: false, final false
  inline int32_t InternalEmulateRead(int32_t count);

  /// @brief Method InternalGetBuffer, addr 0x2575940, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> InternalGetBuffer();

  /// @brief Method InternalGetPosition, addr 0x2575948, size 0x8, virtual false, abstract: false, final false
  inline int32_t InternalGetPosition();

  /// @brief Method InternalReadInt32, addr 0x2575950, size 0xb8, virtual false, abstract: false, final false
  inline int32_t InternalReadInt32();

  static inline ::System::IO::MemoryStream* New_ctor();

  static inline ::System::IO::MemoryStream* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer);

  static inline ::System::IO::MemoryStream* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t index, int32_t count);

  static inline ::System::IO::MemoryStream* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t index, int32_t count, bool writable);

  static inline ::System::IO::MemoryStream* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t index, int32_t count, bool writable, bool publiclyVisible);

  static inline ::System::IO::MemoryStream* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, bool writable);

  static inline ::System::IO::MemoryStream* New_ctor(int32_t capacity);

  /// @brief Method Read, addr 0x2575cf8, size 0x1f4, virtual true, abstract: false, final false
  inline int32_t Read(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method Read, addr 0x2575eec, size 0x1fc, virtual true, abstract: false, final false
  inline int32_t Read(::System::Span_1<uint8_t> buffer);

  /// @brief Method ReadAsync, addr 0x25760e8, size 0x368, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<int32_t>* ReadAsync(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ReadAsync, addr 0x2576450, size 0x2dc, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::ValueTask_1<int32_t> ReadAsync(::System::Memory_1<uint8_t> buffer, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ReadByte, addr 0x257672c, size 0x58, virtual true, abstract: false, final false
  inline int32_t ReadByte();

  /// @brief Method Seek, addr 0x2576e3c, size 0x158, virtual true, abstract: false, final false
  inline int64_t Seek(int64_t offset, ::System::IO::SeekOrigin loc);

  /// @brief Method SetLength, addr 0x2576f94, size 0xe0, virtual true, abstract: false, final false
  inline void SetLength(int64_t value);

  /// @brief Method ToArray, addr 0x2577074, size 0xdc, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ToArray();

  /// @brief Method Write, addr 0x2577150, size 0x298, virtual true, abstract: false, final false
  inline void Write(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method Write, addr 0x25773e8, size 0x254, virtual true, abstract: false, final false
  inline void Write(::System::ReadOnlySpan_1<uint8_t> buffer);

  /// @brief Method WriteAsync, addr 0x257763c, size 0x308, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* WriteAsync(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method WriteAsync, addr 0x2577944, size 0x25c, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::ValueTask WriteAsync(::System::ReadOnlyMemory_1<uint8_t> buffer, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method WriteByte, addr 0x2577ba0, size 0xbc, virtual true, abstract: false, final false
  inline void WriteByte(uint8_t value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get__buffer() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get__buffer();

  constexpr int32_t const& __cordl_internal_get__capacity() const;

  constexpr int32_t& __cordl_internal_get__capacity();

  constexpr bool const& __cordl_internal_get__expandable() const;

  constexpr bool& __cordl_internal_get__expandable();

  constexpr bool const& __cordl_internal_get__exposable() const;

  constexpr bool& __cordl_internal_get__exposable();

  constexpr bool const& __cordl_internal_get__isOpen() const;

  constexpr bool& __cordl_internal_get__isOpen();

  constexpr ::System::Threading::Tasks::Task_1<int32_t>*& __cordl_internal_get__lastReadTask();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<int32_t>*> const& __cordl_internal_get__lastReadTask() const;

  constexpr int32_t const& __cordl_internal_get__length() const;

  constexpr int32_t& __cordl_internal_get__length();

  constexpr int32_t const& __cordl_internal_get__origin() const;

  constexpr int32_t& __cordl_internal_get__origin();

  constexpr int32_t const& __cordl_internal_get__position() const;

  constexpr int32_t& __cordl_internal_get__position();

  constexpr bool const& __cordl_internal_get__writable() const;

  constexpr bool& __cordl_internal_get__writable();

  constexpr void __cordl_internal_set__buffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set__capacity(int32_t value);

  constexpr void __cordl_internal_set__expandable(bool value);

  constexpr void __cordl_internal_set__exposable(bool value);

  constexpr void __cordl_internal_set__isOpen(bool value);

  constexpr void __cordl_internal_set__lastReadTask(::System::Threading::Tasks::Task_1<int32_t>* value);

  constexpr void __cordl_internal_set__length(int32_t value);

  constexpr void __cordl_internal_set__origin(int32_t value);

  constexpr void __cordl_internal_set__position(int32_t value);

  constexpr void __cordl_internal_set__writable(bool value);

  /// @brief Method .ctor, addr 0x25751c0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x2575328, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer);

  /// @brief Method .ctor, addr 0x2575420, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method .ctor, addr 0x2575604, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t index, int32_t count, bool writable);

  /// @brief Method .ctor, addr 0x257542c, size 0x1d8, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t index, int32_t count, bool writable, bool publiclyVisible);

  /// @brief Method .ctor, addr 0x2575330, size 0xf0, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, bool writable);

  /// @brief Method .ctor, addr 0x25751c8, size 0x160, virtual false, abstract: false, final false
  inline void _ctor(int32_t capacity);

  /// @brief Method get_CanRead, addr 0x2575610, size 0x8, virtual true, abstract: false, final false
  inline bool get_CanRead();

  /// @brief Method get_CanSeek, addr 0x2575618, size 0x8, virtual true, abstract: false, final false
  inline bool get_CanSeek();

  /// @brief Method get_CanWrite, addr 0x2575620, size 0x8, virtual true, abstract: false, final false
  inline bool get_CanWrite();

  /// @brief Method get_Capacity, addr 0x2575a44, size 0x20, virtual true, abstract: false, final false
  inline int32_t get_Capacity();

  /// @brief Method get_Length, addr 0x2575be4, size 0x24, virtual true, abstract: false, final false
  inline int64_t get_Length();

  /// @brief Method get_Position, addr 0x2575c08, size 0x20, virtual true, abstract: false, final false
  inline int64_t get_Position();

  /// @brief Method set_Capacity, addr 0x2575a64, size 0x180, virtual true, abstract: false, final false
  inline void set_Capacity(int32_t value);

  /// @brief Method set_Position, addr 0x2575c28, size 0xd0, virtual true, abstract: false, final false
  inline void set_Position(int64_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MemoryStream();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MemoryStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MemoryStream(MemoryStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MemoryStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MemoryStream(MemoryStream const&) = delete;

  /// @brief Field _buffer, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____buffer;

  /// @brief Field _origin, offset: 0x30, size: 0x4, def value: None
  int32_t ____origin;

  /// @brief Field _position, offset: 0x34, size: 0x4, def value: None
  int32_t ____position;

  /// @brief Field _length, offset: 0x38, size: 0x4, def value: None
  int32_t ____length;

  /// @brief Field _capacity, offset: 0x3c, size: 0x4, def value: None
  int32_t ____capacity;

  /// @brief Field _expandable, offset: 0x40, size: 0x1, def value: None
  bool ____expandable;

  /// @brief Field _writable, offset: 0x41, size: 0x1, def value: None
  bool ____writable;

  /// @brief Field _exposable, offset: 0x42, size: 0x1, def value: None
  bool ____exposable;

  /// @brief Field _isOpen, offset: 0x43, size: 0x1, def value: None
  bool ____isOpen;

  /// @brief Field _lastReadTask, offset: 0x48, size: 0x8, def value: None
  ::System::Threading::Tasks::Task_1<int32_t>* ____lastReadTask;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::MemoryStream, 0x50>, "Size mismatch!");

static_assert(offsetof(::System::IO::MemoryStream, ____buffer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::IO::MemoryStream, ____origin) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::IO::MemoryStream, ____position) == 0x34, "Offset mismatch!");

static_assert(offsetof(::System::IO::MemoryStream, ____length) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::IO::MemoryStream, ____capacity) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::System::IO::MemoryStream, ____expandable) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::IO::MemoryStream, ____writable) == 0x41, "Offset mismatch!");

static_assert(offsetof(::System::IO::MemoryStream, ____exposable) == 0x42, "Offset mismatch!");

static_assert(offsetof(::System::IO::MemoryStream, ____isOpen) == 0x43, "Offset mismatch!");

static_assert(offsetof(::System::IO::MemoryStream, ____lastReadTask) == 0x48, "Offset mismatch!");

} // namespace System::IO
NEED_NO_BOX(::System::IO::MemoryStream);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::MemoryStream*, "System.IO", "MemoryStream");
