#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/Internal/Util/zzzz__WrapperStream_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EventStream)
namespace Amazon::Runtime::Internal::Util {
class __EventStream__ReadProgress;
}
namespace Amazon::Runtime::Internal::Util {
struct __EventStream___ReadAsync_d__33;
}
namespace System::IO {
struct SeekOrigin;
}
namespace System::IO {
class Stream;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter;
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
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Amazon::Runtime::Internal::Util {
class EventStream;
}
namespace Amazon::Runtime::Internal::Util {
class __EventStream__ReadProgress;
}
namespace Amazon::Runtime::Internal::Util {
struct __EventStream___ReadAsync_d__33;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::Util::EventStream);
MARK_REF_PTR_T(::Amazon::Runtime::Internal::Util::__EventStream__ReadProgress);
MARK_VAL_T(::Amazon::Runtime::Internal::Util::__EventStream___ReadAsync_d__33);
// Type: ::ReadProgress
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Util {
// Is value type: false
// CS Name: ::EventStream::ReadProgress*
class CORDL_TYPE __EventStream__ReadProgress : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x243818c, size 0x84, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(int32_t bytesRead, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2438210, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2438178, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(int32_t bytesRead);

  static inline ::Amazon::Runtime::Internal::Util::__EventStream__ReadProgress* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x24380b4, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __EventStream__ReadProgress();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__EventStream__ReadProgress", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __EventStream__ReadProgress(__EventStream__ReadProgress&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__EventStream__ReadProgress", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __EventStream__ReadProgress(__EventStream__ReadProgress const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::Util::__EventStream__ReadProgress, 0x80>, "Size mismatch!");

} // namespace Amazon::Runtime::Internal::Util
// Type: ::<ReadAsync>d__33
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Util {
// Is value type: true
// CS Name: ::EventStream::<ReadAsync>d__33
struct CORDL_TYPE __EventStream___ReadAsync_d__33 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x243821c, size 0x24c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2438468, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __EventStream___ReadAsync_d__33();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Amazon::Runtime::Internal::Util::EventStream*",
  // modifiers: "", def_value: None }, CppParam { name: "buffer", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "offset", ty: "int32_t", modifiers: "",
  // def_value: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>", modifiers: "", def_value: None }]
  constexpr __EventStream___ReadAsync_d__33(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> __t__builder,
                                            ::Amazon::Runtime::Internal::Util::EventStream* __4__this, ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count,
                                            ::System::Threading::CancellationToken cancellationToken,
                                            ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::Util::EventStream* __4__this;

  /// @brief Field buffer, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer;

  /// @brief Field offset, offset: 0x30, size: 0x4, def value: None
  int32_t offset;

  /// @brief Field count, offset: 0x34, size: 0x4, def value: None
  int32_t count;

  /// @brief Field cancellationToken, offset: 0x38, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>u__1, offset: 0x40, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::Util::__EventStream___ReadAsync_d__33, 0x50>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::__EventStream___ReadAsync_d__33, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::__EventStream___ReadAsync_d__33, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::__EventStream___ReadAsync_d__33, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::__EventStream___ReadAsync_d__33, buffer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::__EventStream___ReadAsync_d__33, offset) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::__EventStream___ReadAsync_d__33, count) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::__EventStream___ReadAsync_d__33, cancellationToken) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::__EventStream___ReadAsync_d__33, __u__1) == 0x40, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal::Util
// Type: Amazon.Runtime.Internal.Util::EventStream
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 57, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Util {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal.Util::EventStream*
class CORDL_TYPE EventStream : public ::Amazon::Runtime::Internal::Util::WrapperStream {
public:
  // Declarations
  using ReadProgress = ::Amazon::Runtime::Internal::Util::__EventStream__ReadProgress;

  using _ReadAsync_d__33 = ::Amazon::Runtime::Internal::Util::__EventStream___ReadAsync_d__33;

  __declspec(property(get = get_CanRead)) bool CanRead;

  __declspec(property(get = get_CanSeek)) bool CanSeek;

  __declspec(property(get = get_CanTimeout)) bool CanTimeout;

  __declspec(property(get = get_CanWrite)) bool CanWrite;

  __declspec(property(get = get_Length)) int64_t Length;

  /// @brief Field OnRead, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_OnRead, put = __cordl_internal_set_OnRead))::Amazon::Runtime::Internal::Util::__EventStream__ReadProgress* OnRead;

  __declspec(property(get = get_Position, put = set_Position)) int64_t Position;

  __declspec(property(get = get_ReadTimeout, put = set_ReadTimeout)) int32_t ReadTimeout;

  __declspec(property(get = get_WriteTimeout, put = set_WriteTimeout)) int32_t WriteTimeout;

  /// @brief Field disableClose, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_disableClose, put = __cordl_internal_set_disableClose)) bool disableClose;

  /// @brief Method Dispose, addr 0x2437c4c, size 0x4, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method Flush, addr 0x2437dc4, size 0x24, virtual true, abstract: false, final false
  inline void Flush();

  /// @brief Method FlushAsync, addr 0x2437f00, size 0x24, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* FlushAsync(::System::Threading::CancellationToken cancellationToken);

  static inline ::Amazon::Runtime::Internal::Util::EventStream* New_ctor(::System::IO::Stream* stream, bool disableClose);

  /// @brief Method Read, addr 0x2437de8, size 0x50, virtual true, abstract: false, final false
  inline int32_t Read(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method ReadAsync, addr 0x2437f24, size 0x150, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<int32_t>* ReadAsync(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method Seek, addr 0x2437e38, size 0x24, virtual true, abstract: false, final false
  inline int64_t Seek(int64_t offset, ::System::IO::SeekOrigin origin);

  /// @brief Method SetLength, addr 0x2437e5c, size 0x24, virtual true, abstract: false, final false
  inline void SetLength(int64_t value);

  /// @brief Method Write, addr 0x2437e80, size 0x40, virtual true, abstract: false, final false
  inline void Write(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method WriteAsync, addr 0x2438074, size 0x40, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* WriteAsync(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method WriteByte, addr 0x2437ec0, size 0x40, virtual true, abstract: false, final false
  inline void WriteByte(uint8_t value);

  constexpr ::Amazon::Runtime::Internal::Util::__EventStream__ReadProgress*& __cordl_internal_get_OnRead();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::Util::__EventStream__ReadProgress*> const& __cordl_internal_get_OnRead() const;

  constexpr bool const& __cordl_internal_get_disableClose() const;

  constexpr bool& __cordl_internal_get_disableClose();

  constexpr void __cordl_internal_set_OnRead(::Amazon::Runtime::Internal::Util::__EventStream__ReadProgress* value);

  constexpr void __cordl_internal_set_disableClose(bool value);

  /// @brief Method .ctor, addr 0x2437b6c, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* stream, bool disableClose);

  /// @brief Method add_OnRead, addr 0x2437a34, size 0x9c, virtual false, abstract: false, final false
  inline void add_OnRead(::Amazon::Runtime::Internal::Util::__EventStream__ReadProgress* value);

  /// @brief Method get_CanRead, addr 0x2437c50, size 0x20, virtual true, abstract: false, final false
  inline bool get_CanRead();

  /// @brief Method get_CanSeek, addr 0x2437c70, size 0x20, virtual true, abstract: false, final false
  inline bool get_CanSeek();

  /// @brief Method get_CanTimeout, addr 0x2437c90, size 0x20, virtual true, abstract: false, final false
  inline bool get_CanTimeout();

  /// @brief Method get_CanWrite, addr 0x2437cb0, size 0x20, virtual true, abstract: false, final false
  inline bool get_CanWrite();

  /// @brief Method get_Length, addr 0x2437cd0, size 0x20, virtual true, abstract: false, final false
  inline int64_t get_Length();

  /// @brief Method get_Position, addr 0x2437cf0, size 0x20, virtual true, abstract: false, final false
  inline int64_t get_Position();

  /// @brief Method get_ReadTimeout, addr 0x2437d34, size 0x24, virtual true, abstract: false, final false
  inline int32_t get_ReadTimeout();

  /// @brief Method get_WriteTimeout, addr 0x2437d7c, size 0x24, virtual true, abstract: false, final false
  inline int32_t get_WriteTimeout();

  /// @brief Method remove_OnRead, addr 0x2437ad0, size 0x9c, virtual false, abstract: false, final false
  inline void remove_OnRead(::Amazon::Runtime::Internal::Util::__EventStream__ReadProgress* value);

  /// @brief Method set_Position, addr 0x2437d10, size 0x24, virtual true, abstract: false, final false
  inline void set_Position(int64_t value);

  /// @brief Method set_ReadTimeout, addr 0x2437d58, size 0x24, virtual true, abstract: false, final false
  inline void set_ReadTimeout(int32_t value);

  /// @brief Method set_WriteTimeout, addr 0x2437da0, size 0x24, virtual true, abstract: false, final false
  inline void set_WriteTimeout(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EventStream();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EventStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EventStream(EventStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EventStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EventStream(EventStream const&) = delete;

  /// @brief Field OnRead, offset: 0x30, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::Util::__EventStream__ReadProgress* ___OnRead;

  /// @brief Field disableClose, offset: 0x38, size: 0x1, def value: None
  bool ___disableClose;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::Util::EventStream, 0x40>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::EventStream, ___OnRead) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::EventStream, ___disableClose) == 0x38, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal::Util
NEED_NO_BOX(::Amazon::Runtime::Internal::Util::EventStream);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Util::EventStream*, "Amazon.Runtime.Internal.Util", "EventStream");
NEED_NO_BOX(::Amazon::Runtime::Internal::Util::__EventStream__ReadProgress);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Util::__EventStream__ReadProgress*, "Amazon.Runtime.Internal.Util", "EventStream/ReadProgress");
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Util::__EventStream___ReadAsync_d__33, "Amazon.Runtime.Internal.Util", "EventStream/<ReadAsync>d__33");
