#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/Internal/Util/zzzz__WrapperStream_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CachingWrapperStream)
namespace Amazon::Runtime::Internal::Util {
struct __CachingWrapperStream___ReadAsync_d__10;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
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
namespace System::Threading {
struct CancellationToken;
}
namespace System {
template <typename T> struct Nullable_1;
}
// Forward declare root types
namespace Amazon::Runtime::Internal::Util {
class CachingWrapperStream;
}
namespace Amazon::Runtime::Internal::Util {
struct __CachingWrapperStream___ReadAsync_d__10;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::Util::CachingWrapperStream);
MARK_VAL_T(::Amazon::Runtime::Internal::Util::__CachingWrapperStream___ReadAsync_d__10);
// Type: ::<ReadAsync>d__10
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Util {
// Is value type: true
// CS Name: ::CachingWrapperStream::<ReadAsync>d__10
struct CORDL_TYPE __CachingWrapperStream___ReadAsync_d__10 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x23f2470, size 0x22c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x23f269c, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __CachingWrapperStream___ReadAsync_d__10();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::Amazon::Runtime::Internal::Util::CachingWrapperStream*", modifiers: "", def_value: None }, CppParam { name: "buffer", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None
  // }, CppParam { name: "offset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty:
  // "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>", modifiers: "", def_value: None }]
  constexpr __CachingWrapperStream___ReadAsync_d__10(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> __t__builder,
                                                     ::Amazon::Runtime::Internal::Util::CachingWrapperStream* __4__this, ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count,
                                                     ::System::Threading::CancellationToken cancellationToken,
                                                     ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::Util::CachingWrapperStream* __4__this;

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
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::Util::__CachingWrapperStream___ReadAsync_d__10, 0x50>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::__CachingWrapperStream___ReadAsync_d__10, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::__CachingWrapperStream___ReadAsync_d__10, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::__CachingWrapperStream___ReadAsync_d__10, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::__CachingWrapperStream___ReadAsync_d__10, buffer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::__CachingWrapperStream___ReadAsync_d__10, offset) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::__CachingWrapperStream___ReadAsync_d__10, count) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::__CachingWrapperStream___ReadAsync_d__10, cancellationToken) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::__CachingWrapperStream___ReadAsync_d__10, __u__1) == 0x40, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal::Util
// Type: Amazon.Runtime.Internal.Util::CachingWrapperStream
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Util {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal.Util::CachingWrapperStream*
class CORDL_TYPE CachingWrapperStream : public ::Amazon::Runtime::Internal::Util::WrapperStream {
public:
  // Declarations
  using _ReadAsync_d__10 = ::Amazon::Runtime::Internal::Util::__CachingWrapperStream___ReadAsync_d__10;

  __declspec(property(get = get_AllReadBytes, put = set_AllReadBytes))::System::Collections::Generic::List_1<uint8_t>* AllReadBytes;

  __declspec(property(get = get_CanSeek)) bool CanSeek;

  __declspec(property(get = get_LoggableReadBytes))::System::Collections::Generic::List_1<uint8_t>* LoggableReadBytes;

  __declspec(property(get = get_Position, put = set_Position)) int64_t Position;

  /// @brief Field <AllReadBytes>k__BackingField, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__AllReadBytes_k__BackingField,
                      put = __cordl_internal_set__AllReadBytes_k__BackingField))::System::Collections::Generic::List_1<uint8_t>* _AllReadBytes_k__BackingField;

  /// @brief Field _cacheLimit, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__cacheLimit, put = __cordl_internal_set__cacheLimit))::System::Nullable_1<int32_t> _cacheLimit;

  /// @brief Field _cachedBytes, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__cachedBytes, put = __cordl_internal_set__cachedBytes)) int32_t _cachedBytes;

  static inline ::Amazon::Runtime::Internal::Util::CachingWrapperStream* New_ctor(::System::IO::Stream* baseStream, ::System::Nullable_1<int32_t> cacheLimit);

  /// @brief Method Read, addr 0x23f2020, size 0x4c, virtual true, abstract: false, final false
  inline int32_t Read(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method ReadAsync, addr 0x23f2220, size 0x150, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<int32_t>* ReadAsync(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method Seek, addr 0x23f2418, size 0x50, virtual true, abstract: false, final false
  inline int64_t Seek(int64_t offset, ::System::IO::SeekOrigin origin);

  /// @brief Method UpdateCacheAfterReading, addr 0x23f206c, size 0x1b4, virtual false, abstract: false, final false
  inline void UpdateCacheAfterReading(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t numberOfBytesRead);

  constexpr ::System::Collections::Generic::List_1<uint8_t>*& __cordl_internal_get__AllReadBytes_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<uint8_t>*> const& __cordl_internal_get__AllReadBytes_k__BackingField() const;

  constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get__cacheLimit() const;

  constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get__cacheLimit();

  constexpr int32_t const& __cordl_internal_get__cachedBytes() const;

  constexpr int32_t& __cordl_internal_get__cachedBytes();

  constexpr void __cordl_internal_set__AllReadBytes_k__BackingField(::System::Collections::Generic::List_1<uint8_t>* value);

  constexpr void __cordl_internal_set__cacheLimit(::System::Nullable_1<int32_t> value);

  constexpr void __cordl_internal_set__cachedBytes(int32_t value);

  /// @brief Method <>n__0, addr 0x23f2468, size 0x8, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<int32_t>* __n__0(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method .ctor, addr 0x23f1f88, size 0x98, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* baseStream, ::System::Nullable_1<int32_t> cacheLimit);

  /// @brief Method get_AllReadBytes, addr 0x23f1eb4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<uint8_t>* get_AllReadBytes();

  /// @brief Method get_CanSeek, addr 0x23f2370, size 0x8, virtual true, abstract: false, final false
  inline bool get_CanSeek();

  /// @brief Method get_LoggableReadBytes, addr 0x23f1ec4, size 0xc4, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<uint8_t>* get_LoggableReadBytes();

  /// @brief Method get_Position, addr 0x23f2378, size 0x50, virtual true, abstract: false, final false
  inline int64_t get_Position();

  /// @brief Method set_AllReadBytes, addr 0x23f1ebc, size 0x8, virtual false, abstract: false, final false
  inline void set_AllReadBytes(::System::Collections::Generic::List_1<uint8_t>* value);

  /// @brief Method set_Position, addr 0x23f23c8, size 0x50, virtual true, abstract: false, final false
  inline void set_Position(int64_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CachingWrapperStream();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CachingWrapperStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CachingWrapperStream(CachingWrapperStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CachingWrapperStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CachingWrapperStream(CachingWrapperStream const&) = delete;

  /// @brief Field _cacheLimit, offset: 0x30, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> ____cacheLimit;

  /// @brief Field _cachedBytes, offset: 0x38, size: 0x4, def value: None
  int32_t ____cachedBytes;

  /// @brief Field <AllReadBytes>k__BackingField, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<uint8_t>* ____AllReadBytes_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::Util::CachingWrapperStream, 0x48>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::CachingWrapperStream, ____cacheLimit) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::CachingWrapperStream, ____cachedBytes) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::CachingWrapperStream, ____AllReadBytes_k__BackingField) == 0x40, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal::Util
NEED_NO_BOX(::Amazon::Runtime::Internal::Util::CachingWrapperStream);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Util::CachingWrapperStream*, "Amazon.Runtime.Internal.Util", "CachingWrapperStream");
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Util::__CachingWrapperStream___ReadAsync_d__10, "Amazon.Runtime.Internal.Util", "CachingWrapperStream/<ReadAsync>d__10");
