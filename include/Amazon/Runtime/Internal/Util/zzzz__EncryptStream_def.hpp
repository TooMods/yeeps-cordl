#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/Internal/Util/zzzz__WrapperStream_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EncryptStream)
namespace Amazon::Runtime::Internal::Util {
class IEncryptionWrapper;
}
namespace Amazon::Runtime::Internal::Util {
struct __EncryptStream___ReadAsync_d__9;
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
// Forward declare root types
namespace Amazon::Runtime::Internal::Util {
class EncryptStream;
}
namespace Amazon::Runtime::Internal::Util {
struct __EncryptStream___ReadAsync_d__9;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::Util::EncryptStream);
MARK_VAL_T(::Amazon::Runtime::Internal::Util::__EncryptStream___ReadAsync_d__9);
// Type: ::<ReadAsync>d__9
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Util {
// Is value type: true
// CS Name: ::EncryptStream::<ReadAsync>d__9
struct CORDL_TYPE __EncryptStream___ReadAsync_d__9 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x23f5450, size 0x270, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x23f56c0, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __EncryptStream___ReadAsync_d__9();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Amazon::Runtime::Internal::Util::EncryptStream*",
  // modifiers: "", def_value: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "buffer", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "",
  // def_value: None }, CppParam { name: "offset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "",
  // def_value: None }, CppParam { name: "_previousPosition_5__2", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>", modifiers: "", def_value: None }]
  constexpr __EncryptStream___ReadAsync_d__9(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> __t__builder,
                                             ::Amazon::Runtime::Internal::Util::EncryptStream* __4__this, int32_t count, ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset,
                                             ::System::Threading::CancellationToken cancellationToken, int64_t _previousPosition_5__2,
                                             ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::Util::EncryptStream* __4__this;

  /// @brief Field count, offset: 0x28, size: 0x4, def value: None
  int32_t count;

  /// @brief Field buffer, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer;

  /// @brief Field offset, offset: 0x38, size: 0x4, def value: None
  int32_t offset;

  /// @brief Field cancellationToken, offset: 0x40, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <previousPosition>5__2, offset: 0x48, size: 0x8, def value: None
  int64_t _previousPosition_5__2;

  /// @brief Field <>u__1, offset: 0x50, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x60 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::Util::__EncryptStream___ReadAsync_d__9, 0x60>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::__EncryptStream___ReadAsync_d__9, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::__EncryptStream___ReadAsync_d__9, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::__EncryptStream___ReadAsync_d__9, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::__EncryptStream___ReadAsync_d__9, count) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::__EncryptStream___ReadAsync_d__9, buffer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::__EncryptStream___ReadAsync_d__9, offset) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::__EncryptStream___ReadAsync_d__9, cancellationToken) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::__EncryptStream___ReadAsync_d__9, _previousPosition_5__2) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::__EncryptStream___ReadAsync_d__9, __u__1) == 0x50, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal::Util
// Type: Amazon.Runtime.Internal.Util::EncryptStream
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 65, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Util {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal.Util::EncryptStream*
class CORDL_TYPE EncryptStream : public ::Amazon::Runtime::Internal::Util::WrapperStream {
public:
  // Declarations
  using _ReadAsync_d__9 = ::Amazon::Runtime::Internal::Util::__EncryptStream___ReadAsync_d__9;

  __declspec(property(get = get_Algorithm, put = set_Algorithm))::Amazon::Runtime::Internal::Util::IEncryptionWrapper* Algorithm;

  __declspec(property(get = get_CanSeek)) bool CanSeek;

  __declspec(property(get = get_Length)) int64_t Length;

  __declspec(property(get = get_Position, put = set_Position)) int64_t Position;

  /// @brief Field <Algorithm>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__Algorithm_k__BackingField,
                      put = __cordl_internal_set__Algorithm_k__BackingField))::Amazon::Runtime::Internal::Util::IEncryptionWrapper* _Algorithm_k__BackingField;

  /// @brief Field internalBuffer, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_internalBuffer, put = __cordl_internal_set_internalBuffer))::ArrayW<uint8_t, ::Array<uint8_t>*> internalBuffer;

  /// @brief Field performedLastBlockTransform, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get_performedLastBlockTransform, put = __cordl_internal_set_performedLastBlockTransform)) bool performedLastBlockTransform;

  /// @brief Method Append, addr 0x23f4ea4, size 0x2c8, virtual false, abstract: false, final false
  inline int32_t Append(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int64_t previousPosition, int32_t readBytes);

  static inline ::Amazon::Runtime::Internal::Util::EncryptStream* New_ctor(::System::IO::Stream* baseStream);

  /// @brief Method Read, addr 0x23f4e14, size 0x90, virtual true, abstract: false, final false
  inline int32_t Read(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method ReadAsync, addr 0x23f516c, size 0x158, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<int32_t>* ReadAsync(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method Seek, addr 0x23f5368, size 0xe0, virtual true, abstract: false, final false
  inline int64_t Seek(int64_t offset, ::System::IO::SeekOrigin origin);

  /// @brief Method ValidateBaseStream, addr 0x23f4d84, size 0x90, virtual false, abstract: false, final false
  inline void ValidateBaseStream();

  constexpr ::Amazon::Runtime::Internal::Util::IEncryptionWrapper*& __cordl_internal_get__Algorithm_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::Util::IEncryptionWrapper*> const& __cordl_internal_get__Algorithm_k__BackingField() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_internalBuffer() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_internalBuffer();

  constexpr bool const& __cordl_internal_get_performedLastBlockTransform() const;

  constexpr bool& __cordl_internal_get_performedLastBlockTransform();

  constexpr void __cordl_internal_set__Algorithm_k__BackingField(::Amazon::Runtime::Internal::Util::IEncryptionWrapper* value);

  constexpr void __cordl_internal_set_internalBuffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_performedLastBlockTransform(bool value);

  /// @brief Method <>n__0, addr 0x23f5448, size 0x8, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<int32_t>* __n__0(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method .ctor, addr 0x23f4d10, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* baseStream);

  /// @brief Method get_Algorithm, addr 0x23f4d00, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Runtime::Internal::Util::IEncryptionWrapper* get_Algorithm();

  /// @brief Method get_CanSeek, addr 0x23f52c4, size 0x8, virtual true, abstract: false, final false
  inline bool get_CanSeek();

  /// @brief Method get_Length, addr 0x23f52cc, size 0x68, virtual true, abstract: false, final false
  inline int64_t get_Length();

  /// @brief Method get_Position, addr 0x23f5334, size 0x20, virtual true, abstract: false, final false
  inline int64_t get_Position();

  /// @brief Method set_Algorithm, addr 0x23f4d08, size 0x8, virtual false, abstract: false, final false
  inline void set_Algorithm(::Amazon::Runtime::Internal::Util::IEncryptionWrapper* value);

  /// @brief Method set_Position, addr 0x23f5354, size 0x14, virtual true, abstract: false, final false
  inline void set_Position(int64_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EncryptStream();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EncryptStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EncryptStream(EncryptStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EncryptStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EncryptStream(EncryptStream const&) = delete;

  /// @brief Field <Algorithm>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::Util::IEncryptionWrapper* ____Algorithm_k__BackingField;

  /// @brief Field internalBuffer, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___internalBuffer;

  /// @brief Field performedLastBlockTransform, offset: 0x40, size: 0x1, def value: None
  bool ___performedLastBlockTransform;

  /// @brief Field internalEncryptionBlockSize offset 0xffffffff size 0x4
  static constexpr int32_t internalEncryptionBlockSize{ static_cast<int32_t>(0x10) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::Util::EncryptStream, 0x48>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::EncryptStream, ____Algorithm_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::EncryptStream, ___internalBuffer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::EncryptStream, ___performedLastBlockTransform) == 0x40, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal::Util
NEED_NO_BOX(::Amazon::Runtime::Internal::Util::EncryptStream);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Util::EncryptStream*, "Amazon.Runtime.Internal.Util", "EncryptStream");
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Util::__EncryptStream___ReadAsync_d__9, "Amazon.Runtime.Internal.Util", "EncryptStream/<ReadAsync>d__9");
