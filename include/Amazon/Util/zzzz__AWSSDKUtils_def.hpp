#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Util/zzzz__ProcessExecutionResult_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AWSSDKUtils)
namespace Amazon::Runtime::Internal::Util {
class BackgroundInvoker;
}
namespace Amazon::Runtime::Internal::Util {
template <typename TKey, typename TValue> class LruCache_2;
}
namespace Amazon::Runtime::Internal {
class IRequest;
}
namespace Amazon::Runtime::Internal {
class ParameterCollection;
}
namespace Amazon::Runtime {
class IClientConfig;
}
namespace Amazon::Util {
class ProcessExecutionResult;
}
namespace Amazon::Util {
class __AWSSDKUtils__IsSetMethodsCacheKey;
}
namespace Amazon::Util {
struct __AWSSDKUtils___RunProcessAsync_d__105;
}
namespace Amazon::Util {
class __AWSSDKUtils____c;
}
namespace Amazon::Util {
class __AWSSDKUtils____c__DisplayClass104_0;
}
namespace Amazon::Util {
class __AWSSDKUtils____c__DisplayClass105_0;
}
namespace Amazon::Util {
class __AWSSDKUtils____c__DisplayClass41_0;
}
namespace Amazon::Util {
template <typename T> class __AWSSDKUtils____c__DisplayClass56_0_1;
}
namespace Amazon::Util {
template <typename T> class __AWSSDKUtils____c__DisplayClass56_1_1;
}
namespace Amazon::Util {
class __AWSSDKUtils____c__DisplayClass98_0;
}
namespace Amazon::Util {
class __AWSSDKUtils____c__DisplayClass99_0;
}
namespace Amazon::Util {
class __AWSSDKUtils____c__DisplayClass99_1;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IDictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Diagnostics {
class ProcessStartInfo;
}
namespace System::Diagnostics {
class Process;
}
namespace System::IO {
class MemoryStream;
}
namespace System::IO {
class Stream;
}
namespace System::Net::Http {
class HttpClient;
}
namespace System::Net::Http {
class HttpResponseMessage;
}
namespace System::Net {
class IWebProxy;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
struct __ConfiguredTaskAwaitable__ConfiguredTaskAwaiter;
}
namespace System::Threading::Tasks {
template <typename TResult> class TaskCompletionSource_1;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System {
struct DateTime;
}
namespace System {
class EventArgs;
}
namespace System {
template <typename TEventArgs> class EventHandler_1;
}
namespace System {
class Exception;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace System {
class Object;
}
namespace System {
struct TimeSpan;
}
namespace System {
class Type;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace Amazon::Util {
class AWSSDKUtils;
}
namespace Amazon::Util {
class __AWSSDKUtils__IsSetMethodsCacheKey;
}
namespace Amazon::Util {
class __AWSSDKUtils____c;
}
namespace Amazon::Util {
class __AWSSDKUtils____c__DisplayClass104_0;
}
namespace Amazon::Util {
class __AWSSDKUtils____c__DisplayClass105_0;
}
namespace Amazon::Util {
class __AWSSDKUtils____c__DisplayClass41_0;
}
namespace Amazon::Util {
template <typename T> class __AWSSDKUtils____c__DisplayClass56_0_1;
}
namespace Amazon::Util {
template <typename T> class __AWSSDKUtils____c__DisplayClass56_1_1;
}
namespace Amazon::Util {
class __AWSSDKUtils____c__DisplayClass98_0;
}
namespace Amazon::Util {
class __AWSSDKUtils____c__DisplayClass99_0;
}
namespace Amazon::Util {
class __AWSSDKUtils____c__DisplayClass99_1;
}
namespace Amazon::Util {
struct __AWSSDKUtils___RunProcessAsync_d__105;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Util::AWSSDKUtils);
MARK_REF_PTR_T(::Amazon::Util::__AWSSDKUtils__IsSetMethodsCacheKey);
MARK_REF_PTR_T(::Amazon::Util::__AWSSDKUtils____c);
MARK_REF_PTR_T(::Amazon::Util::__AWSSDKUtils____c__DisplayClass104_0);
MARK_REF_PTR_T(::Amazon::Util::__AWSSDKUtils____c__DisplayClass105_0);
MARK_REF_PTR_T(::Amazon::Util::__AWSSDKUtils____c__DisplayClass41_0);
MARK_GEN_REF_PTR_T(::Amazon::Util::__AWSSDKUtils____c__DisplayClass56_0_1);
MARK_GEN_REF_PTR_T(::Amazon::Util::__AWSSDKUtils____c__DisplayClass56_1_1);
MARK_REF_PTR_T(::Amazon::Util::__AWSSDKUtils____c__DisplayClass98_0);
MARK_REF_PTR_T(::Amazon::Util::__AWSSDKUtils____c__DisplayClass99_0);
MARK_REF_PTR_T(::Amazon::Util::__AWSSDKUtils____c__DisplayClass99_1);
MARK_VAL_T(::Amazon::Util::__AWSSDKUtils___RunProcessAsync_d__105);
// Type: ::IsSetMethodsCacheKey
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Util {
// Is value type: false
// CS Name: ::AWSSDKUtils::IsSetMethodsCacheKey*
class CORDL_TYPE __AWSSDKUtils__IsSetMethodsCacheKey : public ::System::Object {
public:
  // Declarations
  /// @brief Field PropertyName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_PropertyName, put = __cordl_internal_set_PropertyName))::StringW PropertyName;

  /// @brief Field Type, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Type, put = __cordl_internal_set_Type))::System::Type* Type;

  /// @brief Method Equals, addr 0x220410c, size 0xe8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* other);

  /// @brief Method GetHashCode, addr 0x22041f4, size 0x48, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::Amazon::Util::__AWSSDKUtils__IsSetMethodsCacheKey* New_ctor(::System::Type* type, ::StringW propertyName);

  /// @brief Method ToString, addr 0x220423c, size 0x68, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::StringW const& __cordl_internal_get_PropertyName() const;

  constexpr ::StringW& __cordl_internal_get_PropertyName();

  constexpr ::System::Type*& __cordl_internal_get_Type();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get_Type() const;

  constexpr void __cordl_internal_set_PropertyName(::StringW value);

  constexpr void __cordl_internal_set_Type(::System::Type* value);

  /// @brief Method .ctor, addr 0x2203a90, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* type, ::StringW propertyName);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AWSSDKUtils__IsSetMethodsCacheKey();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AWSSDKUtils__IsSetMethodsCacheKey", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AWSSDKUtils__IsSetMethodsCacheKey(__AWSSDKUtils__IsSetMethodsCacheKey&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AWSSDKUtils__IsSetMethodsCacheKey", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AWSSDKUtils__IsSetMethodsCacheKey(__AWSSDKUtils__IsSetMethodsCacheKey const&) = delete;

  /// @brief Field Type, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ___Type;

  /// @brief Field PropertyName, offset: 0x18, size: 0x8, def value: None
  ::StringW ___PropertyName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Util::__AWSSDKUtils__IsSetMethodsCacheKey, 0x20>, "Size mismatch!");

static_assert(offsetof(::Amazon::Util::__AWSSDKUtils__IsSetMethodsCacheKey, ___Type) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Util::__AWSSDKUtils__IsSetMethodsCacheKey, ___PropertyName) == 0x18, "Offset mismatch!");

} // namespace Amazon::Util
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Util {
// Is value type: false
// CS Name: ::AWSSDKUtils::<>c*
class CORDL_TYPE __AWSSDKUtils____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::Amazon::Util::__AWSSDKUtils____c* __9;

  /// @brief Field <>9__106_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__106_0,
                             put = setStaticF___9__106_0))::System::Func_2<::Amazon::Util::__AWSSDKUtils__IsSetMethodsCacheKey*, ::System::Reflection::MethodInfo*>* __9__106_0;

  /// @brief Field <>9__39_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__39_0, put = setStaticF___9__39_0))::System::Func_2<::StringW, ::StringW>* __9__39_0;

  /// @brief Field <>9__41_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__41_1, put = setStaticF___9__41_1))::System::Func_2<::StringW, ::StringW>* __9__41_1;

  static inline ::Amazon::Util::__AWSSDKUtils____c* New_ctor();

  /// @brief Method <CanonicalizeResourcePath>b__39_0, addr 0x2204310, size 0x98, virtual false, abstract: false, final false
  inline ::StringW _CanonicalizeResourcePath_b__39_0(::StringW segment);

  /// @brief Method <IsPropertySet>b__106_0, addr 0x2204414, size 0xc8, virtual false, abstract: false, final false
  inline ::System::Reflection::MethodInfo* _IsPropertySet_b__106_0(::Amazon::Util::__AWSSDKUtils__IsSetMethodsCacheKey* k);

  /// @brief Method <JoinResourcePathSegments>b__41_1, addr 0x22043a8, size 0x6c, virtual false, abstract: false, final false
  inline ::StringW _JoinResourcePathSegments_b__41_1(::StringW segment);

  /// @brief Method .ctor, addr 0x2204308, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Amazon::Util::__AWSSDKUtils____c* getStaticF___9();

  static inline ::System::Func_2<::Amazon::Util::__AWSSDKUtils__IsSetMethodsCacheKey*, ::System::Reflection::MethodInfo*>* getStaticF___9__106_0();

  static inline ::System::Func_2<::StringW, ::StringW>* getStaticF___9__39_0();

  static inline ::System::Func_2<::StringW, ::StringW>* getStaticF___9__41_1();

  static inline void setStaticF___9(::Amazon::Util::__AWSSDKUtils____c* value);

  static inline void setStaticF___9__106_0(::System::Func_2<::Amazon::Util::__AWSSDKUtils__IsSetMethodsCacheKey*, ::System::Reflection::MethodInfo*>* value);

  static inline void setStaticF___9__39_0(::System::Func_2<::StringW, ::StringW>* value);

  static inline void setStaticF___9__41_1(::System::Func_2<::StringW, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AWSSDKUtils____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AWSSDKUtils____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AWSSDKUtils____c(__AWSSDKUtils____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AWSSDKUtils____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AWSSDKUtils____c(__AWSSDKUtils____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Util::__AWSSDKUtils____c, 0x10>, "Size mismatch!");

} // namespace Amazon::Util
// Type: ::<>c__DisplayClass41_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 17, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace Amazon::Util {
// Is value type: false
// CS Name: ::AWSSDKUtils::<>c__DisplayClass41_0*
class CORDL_TYPE __AWSSDKUtils____c__DisplayClass41_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field path, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_path, put = __cordl_internal_set_path)) bool path;

  static inline ::Amazon::Util::__AWSSDKUtils____c__DisplayClass41_0* New_ctor();

  /// @brief Method <JoinResourcePathSegments>b__0, addr 0x22044dc, size 0x6c, virtual false, abstract: false, final false
  inline ::StringW _JoinResourcePathSegments_b__0(::StringW segment);

  constexpr bool const& __cordl_internal_get_path() const;

  constexpr bool& __cordl_internal_get_path();

  constexpr void __cordl_internal_set_path(bool value);

  /// @brief Method .ctor, addr 0x21ff9d8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AWSSDKUtils____c__DisplayClass41_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AWSSDKUtils____c__DisplayClass41_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AWSSDKUtils____c__DisplayClass41_0(__AWSSDKUtils____c__DisplayClass41_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AWSSDKUtils____c__DisplayClass41_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AWSSDKUtils____c__DisplayClass41_0(__AWSSDKUtils____c__DisplayClass41_0 const&) = delete;

  /// @brief Field path, offset: 0x10, size: 0x1, def value: None
  bool ___path;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Util::__AWSSDKUtils____c__DisplayClass41_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Amazon::Util::__AWSSDKUtils____c__DisplayClass41_0, ___path) == 0x10, "Offset mismatch!");

} // namespace Amazon::Util
// Type: ::<>c__DisplayClass56_0`1
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Util {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::AWSSDKUtils::<>c__DisplayClass56_0`1<T>*
class CORDL_TYPE __AWSSDKUtils____c__DisplayClass56_0_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field args, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_args, put = __cordl_internal_set_args)) T args;

  /// @brief Field sender, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_sender, put = __cordl_internal_set_sender))::System::Object* sender;

  static inline ::Amazon::Util::__AWSSDKUtils____c__DisplayClass56_0_1<T>* New_ctor();

  constexpr T const& __cordl_internal_get_args() const;

  constexpr T& __cordl_internal_get_args();

  constexpr ::System::Object*& __cordl_internal_get_sender();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_sender() const;

  constexpr void __cordl_internal_set_args(T value);

  constexpr void __cordl_internal_set_sender(::System::Object* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AWSSDKUtils____c__DisplayClass56_0_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AWSSDKUtils____c__DisplayClass56_0_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AWSSDKUtils____c__DisplayClass56_0_1(__AWSSDKUtils____c__DisplayClass56_0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AWSSDKUtils____c__DisplayClass56_0_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AWSSDKUtils____c__DisplayClass56_0_1(__AWSSDKUtils____c__DisplayClass56_0_1 const&) = delete;

  /// @brief Field sender, offset: 0x10, size: 0x8, def value: None
  ::System::Object* ___sender;

  /// @brief Field args, offset: 0x18, size: 0x8, def value: None
  T ___args;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::Util
// Type: ::<>c__DisplayClass56_1`1
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Util {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::AWSSDKUtils::<>c__DisplayClass56_1`1<T>*
class CORDL_TYPE __AWSSDKUtils____c__DisplayClass56_1_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field CS$<>8__locals1, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_CS$__8__locals1, put = __cordl_internal_set_CS$__8__locals1))::Amazon::Util::__AWSSDKUtils____c__DisplayClass56_0_1<T>* CS$__8__locals1;

  /// @brief Field eventHandler, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_eventHandler, put = __cordl_internal_set_eventHandler))::System::EventHandler_1<T>* eventHandler;

  static inline ::Amazon::Util::__AWSSDKUtils____c__DisplayClass56_1_1<T>* New_ctor();

  /// @brief Method <InvokeInBackground>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _InvokeInBackground_b__0();

  constexpr ::Amazon::Util::__AWSSDKUtils____c__DisplayClass56_0_1<T>*& __cordl_internal_get_CS$__8__locals1();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Util::__AWSSDKUtils____c__DisplayClass56_0_1<T>*> const& __cordl_internal_get_CS$__8__locals1() const;

  constexpr ::System::EventHandler_1<T>*& __cordl_internal_get_eventHandler();

  constexpr ::cordl_internals::to_const_pointer<::System::EventHandler_1<T>*> const& __cordl_internal_get_eventHandler() const;

  constexpr void __cordl_internal_set_CS$__8__locals1(::Amazon::Util::__AWSSDKUtils____c__DisplayClass56_0_1<T>* value);

  constexpr void __cordl_internal_set_eventHandler(::System::EventHandler_1<T>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AWSSDKUtils____c__DisplayClass56_1_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AWSSDKUtils____c__DisplayClass56_1_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AWSSDKUtils____c__DisplayClass56_1_1(__AWSSDKUtils____c__DisplayClass56_1_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AWSSDKUtils____c__DisplayClass56_1_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AWSSDKUtils____c__DisplayClass56_1_1(__AWSSDKUtils____c__DisplayClass56_1_1 const&) = delete;

  /// @brief Field eventHandler, offset: 0x10, size: 0x8, def value: None
  ::System::EventHandler_1<T>* ___eventHandler;

  /// @brief Field CS$<>8__locals1, offset: 0x18, size: 0x8, def value: None
  ::Amazon::Util::__AWSSDKUtils____c__DisplayClass56_0_1<T>* ___CS$__8__locals1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::Util
// Type: ::<>c__DisplayClass98_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Util {
// Is value type: false
// CS Name: ::AWSSDKUtils::<>c__DisplayClass98_0*
class CORDL_TYPE __AWSSDKUtils____c__DisplayClass98_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field client, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_client, put = __cordl_internal_set_client))::System::Net::Http::HttpClient* client;

  /// @brief Field uri, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_uri, put = __cordl_internal_set_uri))::System::Uri* uri;

  static inline ::Amazon::Util::__AWSSDKUtils____c__DisplayClass98_0* New_ctor();

  /// @brief Method <DownloadStringContent>b__0, addr 0x2204548, size 0x24, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::StringW>* _DownloadStringContent_b__0();

  constexpr ::System::Net::Http::HttpClient*& __cordl_internal_get_client();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::Http::HttpClient*> const& __cordl_internal_get_client() const;

  constexpr ::System::Uri*& __cordl_internal_get_uri();

  constexpr ::cordl_internals::to_const_pointer<::System::Uri*> const& __cordl_internal_get_uri() const;

  constexpr void __cordl_internal_set_client(::System::Net::Http::HttpClient* value);

  constexpr void __cordl_internal_set_uri(::System::Uri* value);

  /// @brief Method .ctor, addr 0x2202364, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AWSSDKUtils____c__DisplayClass98_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AWSSDKUtils____c__DisplayClass98_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AWSSDKUtils____c__DisplayClass98_0(__AWSSDKUtils____c__DisplayClass98_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AWSSDKUtils____c__DisplayClass98_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AWSSDKUtils____c__DisplayClass98_0(__AWSSDKUtils____c__DisplayClass98_0 const&) = delete;

  /// @brief Field uri, offset: 0x10, size: 0x8, def value: None
  ::System::Uri* ___uri;

  /// @brief Field client, offset: 0x18, size: 0x8, def value: None
  ::System::Net::Http::HttpClient* ___client;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Util::__AWSSDKUtils____c__DisplayClass98_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::Amazon::Util::__AWSSDKUtils____c__DisplayClass98_0, ___uri) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Util::__AWSSDKUtils____c__DisplayClass98_0, ___client) == 0x18, "Offset mismatch!");

} // namespace Amazon::Util
// Type: ::<>c__DisplayClass99_0
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Util {
// Is value type: false
// CS Name: ::AWSSDKUtils::<>c__DisplayClass99_0*
class CORDL_TYPE __AWSSDKUtils____c__DisplayClass99_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field client, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_client, put = __cordl_internal_set_client))::System::Net::Http::HttpClient* client;

  /// @brief Field content, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_content, put = __cordl_internal_set_content))::StringW content;

  /// @brief Field requestType, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_requestType, put = __cordl_internal_set_requestType))::StringW requestType;

  /// @brief Field uri, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_uri, put = __cordl_internal_set_uri))::System::Uri* uri;

  static inline ::Amazon::Util::__AWSSDKUtils____c__DisplayClass99_0* New_ctor();

  /// @brief Method <ExecuteHttpRequest>b__0, addr 0x220456c, size 0xfc, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>* _ExecuteHttpRequest_b__0();

  constexpr ::System::Net::Http::HttpClient*& __cordl_internal_get_client();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::Http::HttpClient*> const& __cordl_internal_get_client() const;

  constexpr ::StringW const& __cordl_internal_get_content() const;

  constexpr ::StringW& __cordl_internal_get_content();

  constexpr ::StringW const& __cordl_internal_get_requestType() const;

  constexpr ::StringW& __cordl_internal_get_requestType();

  constexpr ::System::Uri*& __cordl_internal_get_uri();

  constexpr ::cordl_internals::to_const_pointer<::System::Uri*> const& __cordl_internal_get_uri() const;

  constexpr void __cordl_internal_set_client(::System::Net::Http::HttpClient* value);

  constexpr void __cordl_internal_set_content(::StringW value);

  constexpr void __cordl_internal_set_requestType(::StringW value);

  constexpr void __cordl_internal_set_uri(::System::Uri* value);

  /// @brief Method .ctor, addr 0x2202d6c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AWSSDKUtils____c__DisplayClass99_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AWSSDKUtils____c__DisplayClass99_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AWSSDKUtils____c__DisplayClass99_0(__AWSSDKUtils____c__DisplayClass99_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AWSSDKUtils____c__DisplayClass99_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AWSSDKUtils____c__DisplayClass99_0(__AWSSDKUtils____c__DisplayClass99_0 const&) = delete;

  /// @brief Field requestType, offset: 0x10, size: 0x8, def value: None
  ::StringW ___requestType;

  /// @brief Field uri, offset: 0x18, size: 0x8, def value: None
  ::System::Uri* ___uri;

  /// @brief Field content, offset: 0x20, size: 0x8, def value: None
  ::StringW ___content;

  /// @brief Field client, offset: 0x28, size: 0x8, def value: None
  ::System::Net::Http::HttpClient* ___client;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Util::__AWSSDKUtils____c__DisplayClass99_0, 0x30>, "Size mismatch!");

static_assert(offsetof(::Amazon::Util::__AWSSDKUtils____c__DisplayClass99_0, ___requestType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Util::__AWSSDKUtils____c__DisplayClass99_0, ___uri) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::Util::__AWSSDKUtils____c__DisplayClass99_0, ___content) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::Util::__AWSSDKUtils____c__DisplayClass99_0, ___client) == 0x28, "Offset mismatch!");

} // namespace Amazon::Util
// Type: ::<>c__DisplayClass99_1
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Util {
// Is value type: false
// CS Name: ::AWSSDKUtils::<>c__DisplayClass99_1*
class CORDL_TYPE __AWSSDKUtils____c__DisplayClass99_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field response, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_response, put = __cordl_internal_set_response))::System::Net::Http::HttpResponseMessage* response;

  static inline ::Amazon::Util::__AWSSDKUtils____c__DisplayClass99_1* New_ctor();

  /// @brief Method <ExecuteHttpRequest>b__1, addr 0x2204668, size 0x24, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::StringW>* _ExecuteHttpRequest_b__1();

  constexpr ::System::Net::Http::HttpResponseMessage*& __cordl_internal_get_response();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::Http::HttpResponseMessage*> const& __cordl_internal_get_response() const;

  constexpr void __cordl_internal_set_response(::System::Net::Http::HttpResponseMessage* value);

  /// @brief Method .ctor, addr 0x2202d74, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AWSSDKUtils____c__DisplayClass99_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AWSSDKUtils____c__DisplayClass99_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AWSSDKUtils____c__DisplayClass99_1(__AWSSDKUtils____c__DisplayClass99_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AWSSDKUtils____c__DisplayClass99_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AWSSDKUtils____c__DisplayClass99_1(__AWSSDKUtils____c__DisplayClass99_1 const&) = delete;

  /// @brief Field response, offset: 0x10, size: 0x8, def value: None
  ::System::Net::Http::HttpResponseMessage* ___response;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Util::__AWSSDKUtils____c__DisplayClass99_1, 0x18>, "Size mismatch!");

static_assert(offsetof(::Amazon::Util::__AWSSDKUtils____c__DisplayClass99_1, ___response) == 0x10, "Offset mismatch!");

} // namespace Amazon::Util
// Type: ::<>c__DisplayClass104_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Util {
// Is value type: false
// CS Name: ::AWSSDKUtils::<>c__DisplayClass104_0*
class CORDL_TYPE __AWSSDKUtils____c__DisplayClass104_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field process, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_process, put = __cordl_internal_set_process))::System::Diagnostics::Process* process;

  /// @brief Field standardOutput, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_standardOutput, put = __cordl_internal_set_standardOutput))::StringW standardOutput;

  static inline ::Amazon::Util::__AWSSDKUtils____c__DisplayClass104_0* New_ctor();

  /// @brief Method <RunProcess>b__0, addr 0x220468c, size 0x3c, virtual false, abstract: false, final false
  inline void _RunProcess_b__0();

  constexpr ::System::Diagnostics::Process*& __cordl_internal_get_process();

  constexpr ::cordl_internals::to_const_pointer<::System::Diagnostics::Process*> const& __cordl_internal_get_process() const;

  constexpr ::StringW const& __cordl_internal_get_standardOutput() const;

  constexpr ::StringW& __cordl_internal_get_standardOutput();

  constexpr void __cordl_internal_set_process(::System::Diagnostics::Process* value);

  constexpr void __cordl_internal_set_standardOutput(::StringW value);

  /// @brief Method .ctor, addr 0x220356c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AWSSDKUtils____c__DisplayClass104_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AWSSDKUtils____c__DisplayClass104_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AWSSDKUtils____c__DisplayClass104_0(__AWSSDKUtils____c__DisplayClass104_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AWSSDKUtils____c__DisplayClass104_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AWSSDKUtils____c__DisplayClass104_0(__AWSSDKUtils____c__DisplayClass104_0 const&) = delete;

  /// @brief Field process, offset: 0x10, size: 0x8, def value: None
  ::System::Diagnostics::Process* ___process;

  /// @brief Field standardOutput, offset: 0x18, size: 0x8, def value: None
  ::StringW ___standardOutput;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Util::__AWSSDKUtils____c__DisplayClass104_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::Amazon::Util::__AWSSDKUtils____c__DisplayClass104_0, ___process) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Util::__AWSSDKUtils____c__DisplayClass104_0, ___standardOutput) == 0x18, "Offset mismatch!");

} // namespace Amazon::Util
// Type: ::<>c__DisplayClass105_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Util {
// Is value type: false
// CS Name: ::AWSSDKUtils::<>c__DisplayClass105_0*
class CORDL_TYPE __AWSSDKUtils____c__DisplayClass105_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field tcs, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_tcs, put = __cordl_internal_set_tcs))::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>* tcs;

  static inline ::Amazon::Util::__AWSSDKUtils____c__DisplayClass105_0* New_ctor();

  /// @brief Method <RunProcessAsync>b__0, addr 0x22046d0, size 0x54, virtual false, abstract: false, final false
  inline void _RunProcessAsync_b__0(::System::Object* s, ::System::EventArgs* ea);

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>*& __cordl_internal_get_tcs();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>*> const& __cordl_internal_get_tcs() const;

  constexpr void __cordl_internal_set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>* value);

  /// @brief Method .ctor, addr 0x22046c8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AWSSDKUtils____c__DisplayClass105_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AWSSDKUtils____c__DisplayClass105_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AWSSDKUtils____c__DisplayClass105_0(__AWSSDKUtils____c__DisplayClass105_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AWSSDKUtils____c__DisplayClass105_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AWSSDKUtils____c__DisplayClass105_0(__AWSSDKUtils____c__DisplayClass105_0 const&) = delete;

  /// @brief Field tcs, offset: 0x10, size: 0x8, def value: None
  ::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>* ___tcs;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Util::__AWSSDKUtils____c__DisplayClass105_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Amazon::Util::__AWSSDKUtils____c__DisplayClass105_0, ___tcs) == 0x10, "Offset mismatch!");

} // namespace Amazon::Util
// Type: ::<RunProcessAsync>d__105
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Util {
// Is value type: true
// CS Name: ::AWSSDKUtils::<RunProcessAsync>d__105
struct CORDL_TYPE __AWSSDKUtils___RunProcessAsync_d__105 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2204724, size 0xa14, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2205138, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AWSSDKUtils___RunProcessAsync_d__105();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Amazon::Util::ProcessExecutionResult*>", modifiers: "", def_value: None }, CppParam { name: "processStartInfo", ty:
  // "::System::Diagnostics::ProcessStartInfo*", modifiers: "", def_value: None }, CppParam { name: "_process_5__2", ty: "::System::Diagnostics::Process*", modifiers: "", def_value: None }, CppParam {
  // name: "_standardErrorTask_5__3", ty: "::System::Threading::Tasks::Task_1<::StringW>*", modifiers: "", def_value: None }, CppParam { name: "_standardOutputTask_5__4", ty:
  // "::System::Threading::Tasks::Task_1<::StringW>*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
  constexpr __AWSSDKUtils___RunProcessAsync_d__105(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Amazon::Util::ProcessExecutionResult*> __t__builder,
                                                   ::System::Diagnostics::ProcessStartInfo* processStartInfo, ::System::Diagnostics::Process* _process_5__2,
                                                   ::System::Threading::Tasks::Task_1<::StringW>* _standardErrorTask_5__3, ::System::Threading::Tasks::Task_1<::StringW>* _standardOutputTask_5__4,
                                                   ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Amazon::Util::ProcessExecutionResult*> __t__builder;

  /// @brief Field processStartInfo, offset: 0x20, size: 0x8, def value: None
  ::System::Diagnostics::ProcessStartInfo* processStartInfo;

  /// @brief Field <process>5__2, offset: 0x28, size: 0x8, def value: None
  ::System::Diagnostics::Process* _process_5__2;

  /// @brief Field <standardErrorTask>5__3, offset: 0x30, size: 0x8, def value: None
  ::System::Threading::Tasks::Task_1<::StringW>* _standardErrorTask_5__3;

  /// @brief Field <standardOutputTask>5__4, offset: 0x38, size: 0x8, def value: None
  ::System::Threading::Tasks::Task_1<::StringW>* _standardOutputTask_5__4;

  /// @brief Field <>u__1, offset: 0x40, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Util::__AWSSDKUtils___RunProcessAsync_d__105, 0x50>, "Size mismatch!");

static_assert(offsetof(::Amazon::Util::__AWSSDKUtils___RunProcessAsync_d__105, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Amazon::Util::__AWSSDKUtils___RunProcessAsync_d__105, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Amazon::Util::__AWSSDKUtils___RunProcessAsync_d__105, processStartInfo) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::Util::__AWSSDKUtils___RunProcessAsync_d__105, _process_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::Util::__AWSSDKUtils___RunProcessAsync_d__105, _standardErrorTask_5__3) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::Util::__AWSSDKUtils___RunProcessAsync_d__105, _standardOutputTask_5__4) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::Util::__AWSSDKUtils___RunProcessAsync_d__105, __u__1) == 0x40, "Offset mismatch!");

} // namespace Amazon::Util
// Type: Amazon.Util::AWSSDKUtils
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Util {
// Is value type: false
// CS Name: ::Amazon.Util::AWSSDKUtils*
class CORDL_TYPE AWSSDKUtils : public ::System::Object {
public:
  // Declarations
  using IsSetMethodsCacheKey = ::Amazon::Util::__AWSSDKUtils__IsSetMethodsCacheKey;

  using _RunProcessAsync_d__105 = ::Amazon::Util::__AWSSDKUtils___RunProcessAsync_d__105;

  using __c = ::Amazon::Util::__AWSSDKUtils____c;

  using __c__DisplayClass104_0 = ::Amazon::Util::__AWSSDKUtils____c__DisplayClass104_0;

  using __c__DisplayClass105_0 = ::Amazon::Util::__AWSSDKUtils____c__DisplayClass105_0;

  using __c__DisplayClass41_0 = ::Amazon::Util::__AWSSDKUtils____c__DisplayClass41_0;

  template <typename T> using __c__DisplayClass56_0_1 = ::Amazon::Util::__AWSSDKUtils____c__DisplayClass56_0_1<T>;

  template <typename T> using __c__DisplayClass56_1_1 = ::Amazon::Util::__AWSSDKUtils____c__DisplayClass56_1_1<T>;

  using __c__DisplayClass98_0 = ::Amazon::Util::__AWSSDKUtils____c__DisplayClass98_0;

  using __c__DisplayClass99_0 = ::Amazon::Util::__AWSSDKUtils____c__DisplayClass99_0;

  using __c__DisplayClass99_1 = ::Amazon::Util::__AWSSDKUtils____c__DisplayClass99_1;

  /// @brief Field EPOCH_START, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_EPOCH_START, put = setStaticF_EPOCH_START))::System::DateTime EPOCH_START;

  /// @brief Field IsSetMethodsCache, offset 0xffffffff, size 0x8
  static __declspec(property(
      get = getStaticF_IsSetMethodsCache,
      put = setStaticF_IsSetMethodsCache))::Amazon::Runtime::Internal::Util::LruCache_2<::Amazon::Util::__AWSSDKUtils__IsSetMethodsCacheKey*, ::System::Reflection::MethodInfo*>* IsSetMethodsCache;

  /// @brief Field RFCEncodingSchemes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_RFCEncodingSchemes, put = setStaticF_RFCEncodingSchemes))::System::Collections::Generic::Dictionary_2<int32_t, ::StringW>* RFCEncodingSchemes;

  /// @brief Field ValidPathCharacters, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ValidPathCharacters, put = setStaticF_ValidPathCharacters))::StringW ValidPathCharacters;

  /// @brief Field _dispatcher, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__dispatcher, put = setStaticF__dispatcher))::Amazon::Runtime::Internal::Util::BackgroundInvoker* _dispatcher;

  /// @brief Field _userAgent, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__userAgent, put = setStaticF__userAgent))::StringW _userAgent;

  /// @brief Method AreEqual, addr 0x220081c, size 0x3c, virtual false, abstract: false, final false
  static inline bool AreEqual(::System::Object* a, ::System::Object* b);

  /// @brief Method AreEqual, addr 0x22006e4, size 0x138, virtual false, abstract: false, final false
  static inline bool AreEqual(::ArrayW<::System::Object*, ::Array<::System::Object*>*> itemsA, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> itemsB);

  /// @brief Method BytesToHexString, addr 0x2201cac, size 0xa0, virtual false, abstract: false, final false
  static inline ::StringW BytesToHexString(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method CalculateStringToSignV2, addr 0x21fe688, size 0x38c, virtual false, abstract: false, final false
  static inline ::StringW CalculateStringToSignV2(::Amazon::Runtime::Internal::ParameterCollection* parameterCollection, ::StringW serviceUrl);

  /// @brief Method CanonicalizeResourcePath, addr 0x21fedd0, size 0x6c, virtual false, abstract: false, final false
  static inline ::StringW CanonicalizeResourcePath(::System::Uri* endpoint, ::StringW resourcePath);

  /// @brief Method CanonicalizeResourcePath, addr 0x21ff3f0, size 0x70, virtual false, abstract: false, final false
  static inline ::StringW CanonicalizeResourcePath(::System::Uri* endpoint, ::StringW resourcePath, bool detectPreEncode);

  /// @brief Method CanonicalizeResourcePath, addr 0x21fee3c, size 0x5b4, virtual false, abstract: false, final false
  static inline ::StringW CanonicalizeResourcePath(::System::Uri* endpoint, ::StringW resourcePath, bool detectPreEncode,
                                                   ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* pathResources, int32_t marshallerVersion);

  /// @brief Method CompressSpaces, addr 0x2202dd4, size 0x160, virtual false, abstract: false, final false
  static inline ::StringW CompressSpaces(::StringW data);

  /// @brief Method ConvertDateTimetoMilliseconds, addr 0x2200260, size 0x74, virtual false, abstract: false, final false
  static inline int64_t ConvertDateTimetoMilliseconds(::System::DateTime dateTime);

  /// @brief Method ConvertFromUnixEpochMilliseconds, addr 0x21ffe40, size 0xa8, virtual false, abstract: false, final false
  static inline ::System::DateTime ConvertFromUnixEpochMilliseconds(int64_t milliseconds);

  /// @brief Method ConvertFromUnixEpochSeconds, addr 0x21ffd94, size 0xac, virtual false, abstract: false, final false
  static inline ::System::DateTime ConvertFromUnixEpochSeconds(int32_t seconds);

  /// @brief Method ConvertTimeSpanToMilliseconds, addr 0x22002d4, size 0x20, virtual false, abstract: false, final false
  static inline int64_t ConvertTimeSpanToMilliseconds(::System::TimeSpan timeSpan);

  /// @brief Method ConvertToUnixEpochMilliSeconds, addr 0x2200120, size 0x54, virtual false, abstract: false, final false
  static inline double_t ConvertToUnixEpochMilliSeconds(::System::DateTime dateTime);

  /// @brief Method ConvertToUnixEpochSeconds, addr 0x21ffee8, size 0xa8, virtual false, abstract: false, final false
  static inline int32_t ConvertToUnixEpochSeconds(::System::DateTime dateTime);

  /// @brief Method ConvertToUnixEpochSecondsDouble, addr 0x2200174, size 0xec, virtual false, abstract: false, final false
  static inline double_t ConvertToUnixEpochSecondsDouble(::System::DateTime dateTime);

  /// @brief Method ConvertToUnixEpochSecondsString, addr 0x2200028, size 0xf8, virtual false, abstract: false, final false
  static inline ::StringW ConvertToUnixEpochSecondsString(::System::DateTime dateTime);

  /// @brief Method CopyStream, addr 0x2200928, size 0x68, virtual false, abstract: false, final false
  static inline void CopyStream(::System::IO::Stream* source, ::System::IO::Stream* destination);

  /// @brief Method CopyStream, addr 0x2200990, size 0x18c, virtual false, abstract: false, final false
  static inline void CopyStream(::System::IO::Stream* source, ::System::IO::Stream* destination, int32_t bufferSize);

  /// @brief Method CreateClient, addr 0x220236c, size 0x44c, virtual false, abstract: false, final false
  static inline ::System::Net::Http::HttpClient* CreateClient(::System::Uri* uri, ::System::TimeSpan timeout, ::System::Net::IWebProxy* proxy,
                                                              ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* headers);

  /// @brief Method DetermineRegion, addr 0x21f6ccc, size 0x11c, virtual false, abstract: false, final false
  static inline ::StringW DetermineRegion(::StringW url);

  /// @brief Method DetermineService, addr 0x21ffc20, size 0x174, virtual false, abstract: false, final false
  static inline ::StringW DetermineService(::StringW url);

  /// @brief Method DetermineValidPathCharacters, addr 0x21fe3f4, size 0x148, virtual false, abstract: false, final false
  static inline ::StringW DetermineValidPathCharacters();

  /// @brief Method DictionariesAreEqual, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename K, typename V> static inline bool DictionariesAreEqual(::System::Collections::Generic::Dictionary_2<K, V>* a, ::System::Collections::Generic::Dictionary_2<K, V>* b);

  /// @brief Method DownloadStringContent, addr 0x2202014, size 0x90, virtual false, abstract: false, final false
  static inline ::StringW DownloadStringContent(::System::Uri* uri);

  /// @brief Method DownloadStringContent, addr 0x21fd8d8, size 0x9c, virtual false, abstract: false, final false
  static inline ::StringW DownloadStringContent(::System::Uri* uri, ::System::Net::IWebProxy* proxy);

  /// @brief Method DownloadStringContent, addr 0x22022fc, size 0x68, virtual false, abstract: false, final false
  static inline ::StringW DownloadStringContent(::System::Uri* uri, ::System::TimeSpan timeout);

  /// @brief Method DownloadStringContent, addr 0x22020a4, size 0x258, virtual false, abstract: false, final false
  static inline ::StringW DownloadStringContent(::System::Uri* uri, ::System::TimeSpan timeout, ::System::Net::IWebProxy* proxy);

  /// @brief Method ExecuteHttpRequest, addr 0x22027b8, size 0x5b4, virtual false, abstract: false, final false
  static inline ::StringW ExecuteHttpRequest(::System::Uri* uri, ::StringW requestType, ::StringW content, ::System::TimeSpan timeout, ::System::Net::IWebProxy* proxy,
                                             ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* headers);

  /// @brief Method ForceCanonicalPathAndQuery, addr 0x2203abc, size 0x4, virtual false, abstract: false, final false
  static inline void ForceCanonicalPathAndQuery(::System::Uri* uri);

  /// @brief Method GenerateChecksumForContent, addr 0x2201a30, size 0x1ec, virtual false, abstract: false, final false
  static inline ::StringW GenerateChecksumForContent(::StringW content, bool fBase64Encode);

  /// @brief Method GenerateMD5ChecksumForStream, addr 0x220186c, size 0x1c4, virtual false, abstract: false, final false
  static inline ::StringW GenerateMD5ChecksumForStream(::System::IO::Stream* input);

  /// @brief Method GenerateMemoryStreamFromString, addr 0x2200858, size 0xd0, virtual false, abstract: false, final false
  static inline ::System::IO::MemoryStream* GenerateMemoryStreamFromString(::StringW s);

  /// @brief Method GetConnectionLimit, addr 0x2203ac4, size 0x6c, virtual false, abstract: false, final false
  static inline int32_t GetConnectionLimit(::System::Nullable_1<int32_t> clientConfigValue);

  /// @brief Method GetExtension, addr 0x21fe53c, size 0x120, virtual false, abstract: false, final false
  static inline ::StringW GetExtension(::StringW path);

  /// @brief Method GetFormattedTimestampISO8601, addr 0x2200dd0, size 0xd4, virtual false, abstract: false, final false
  static inline ::StringW GetFormattedTimestampISO8601(::Amazon::Runtime::IClientConfig* config);

  /// @brief Method GetFormattedTimestampISO8601, addr 0x2200c94, size 0x13c, virtual false, abstract: false, final false
  static inline ::StringW GetFormattedTimestampISO8601(::System::DateTime dateTime);

  /// @brief Method GetFormattedTimestampISO8601, addr 0x2200c1c, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW GetFormattedTimestampISO8601(int32_t minutesFromNow);

  /// @brief Method GetFormattedTimestampRFC822, addr 0x2200ef4, size 0xd0, virtual false, abstract: false, final false
  static inline ::StringW GetFormattedTimestampRFC822(int32_t minutesFromNow);

  /// @brief Method GetParametersAsString, addr 0x21feb50, size 0x280, virtual false, abstract: false, final false
  static inline ::StringW GetParametersAsString(::Amazon::Runtime::Internal::ParameterCollection* parameterCollection);

  /// @brief Method GetParametersAsString, addr 0x21fea7c, size 0xd4, virtual false, abstract: false, final false
  static inline ::StringW GetParametersAsString(::Amazon::Runtime::Internal::IRequest* request);

  /// @brief Method GetTimeSpanInTicks, addr 0x21fff90, size 0x98, virtual false, abstract: false, final false
  static inline ::System::TimeSpan GetTimeSpanInTicks(::System::DateTime dateTime);

  /// @brief Method HasBidiControlCharacters, addr 0x2201ec4, size 0xfc, virtual false, abstract: false, final false
  static inline bool HasBidiControlCharacters(::StringW input);

  /// @brief Method HexStringToBytes, addr 0x2201d4c, size 0x178, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> HexStringToBytes(::StringW hex);

  /// @brief Method InvokeInBackground, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void InvokeInBackground(::System::EventHandler_1<T>* handler, T args, ::System::Object* sender);

  /// @brief Method IsAbsolutePath, addr 0x2200fc4, size 0xb0, virtual false, abstract: false, final false
  static inline bool IsAbsolutePath(::StringW path);

  /// @brief Method IsBidiControlChar, addr 0x2201fc0, size 0x54, virtual false, abstract: false, final false
  static inline bool IsBidiControlChar(char16_t c);

  /// @brief Method IsPartiallyQualifiedForWindows, addr 0x220112c, size 0x1a8, virtual false, abstract: false, final false
  static inline bool IsPartiallyQualifiedForWindows(::StringW path);

  /// @brief Method IsPathSeparator, addr 0x21fe65c, size 0x2c, virtual false, abstract: false, final false
  static inline bool IsPathSeparator(char16_t ch);

  /// @brief Method IsPropertySet, addr 0x22036a0, size 0x3f0, virtual false, abstract: false, final false
  static inline bool IsPropertySet(::System::Object* awsServiceObject, ::StringW propertyName);

  /// @brief Method IsValidWindowsDriveChar, addr 0x22012f0, size 0x2c, virtual false, abstract: false, final false
  static inline bool IsValidWindowsDriveChar(char16_t value);

  /// @brief Method IsWindows, addr 0x2201074, size 0xb8, virtual false, abstract: false, final false
  static inline bool IsWindows();

  /// @brief Method IsWindowsDirectorySeparator, addr 0x22012d4, size 0x1c, virtual false, abstract: false, final false
  static inline bool IsWindowsDirectorySeparator(char16_t c);

  /// @brief Method Join, addr 0x21ffa64, size 0x1bc, virtual false, abstract: false, final false
  static inline ::StringW Join(::System::Collections::Generic::List_1<::StringW>* strings);

  /// @brief Method JoinResourcePathSegments, addr 0x21ff804, size 0x1d4, virtual false, abstract: false, final false
  static inline ::StringW JoinResourcePathSegments(::System::Collections::Generic::IEnumerable_1<::StringW>* pathSegments, bool path);

  /// @brief Method OpenStream, addr 0x2202d7c, size 0x58, virtual false, abstract: false, final false
  static inline ::System::IO::Stream* OpenStream(::System::Uri* uri);

  /// @brief Method OpenStream, addr 0x21f85b4, size 0x204, virtual false, abstract: false, final false
  static inline ::System::IO::Stream* OpenStream(::System::Uri* uri, ::System::Net::IWebProxy* proxy);

  /// @brief Method ParseQueryParameters, addr 0x2200500, size 0x1e4, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* ParseQueryParameters(::StringW url);

  /// @brief Method PreserveStackTrace, addr 0x2203ac0, size 0x4, virtual false, abstract: false, final false
  static inline void PreserveStackTrace(::System::Exception* exception);

  /// @brief Method ProtectEncodedSlashUrlEncode, addr 0x220166c, size 0x200, virtual false, abstract: false, final false
  static inline ::StringW ProtectEncodedSlashUrlEncode(::StringW data, bool path);

  /// @brief Method ResolveResourcePath, addr 0x21ff9e0, size 0x84, virtual false, abstract: false, final false
  static inline ::StringW ResolveResourcePath(::StringW resourcePath, ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* pathResources);

  /// @brief Method RunProcess, addr 0x2202f34, size 0x638, virtual false, abstract: false, final false
  static inline ::Amazon::Util::ProcessExecutionResult* RunProcess(::System::Diagnostics::ProcessStartInfo* processStartInfo);

  /// @brief Method RunProcessAsync, addr 0x220357c, size 0x124, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task_1<::Amazon::Util::ProcessExecutionResult*>* RunProcessAsync(::System::Diagnostics::ProcessStartInfo* processStartInfo);

  /// @brief Method Sleep, addr 0x21f87b8, size 0x8, virtual false, abstract: false, final false
  static inline void Sleep(int32_t ms);

  /// @brief Method Sleep, addr 0x2201c1c, size 0x90, virtual false, abstract: false, final false
  static inline void Sleep(::System::TimeSpan ts);

  /// @brief Method SplitResourcePathIntoSegments, addr 0x21ff460, size 0x3a4, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::StringW>* SplitResourcePathIntoSegments(::StringW resourcePath,
                                                                                                        ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* pathResources);

  /// @brief Method ToHex, addr 0x22002f4, size 0x14c, virtual false, abstract: false, final false
  static inline ::StringW ToHex(::ArrayW<uint8_t, ::Array<uint8_t>*> data, bool lowercase);

  /// @brief Method UrlEncode, addr 0x21fea14, size 0x68, virtual false, abstract: false, final false
  static inline ::StringW UrlEncode(::StringW data, bool path);

  /// @brief Method UrlEncode, addr 0x220131c, size 0x2c4, virtual false, abstract: false, final false
  static inline ::StringW UrlEncode(int32_t rfcNumber, ::StringW data, bool path);

  /// @brief Method UrlEncodeSlash, addr 0x22015e0, size 0x8c, virtual false, abstract: false, final false
  static inline ::StringW UrlEncodeSlash(::StringW data);

  static inline ::System::DateTime getStaticF_EPOCH_START();

  static inline ::Amazon::Runtime::Internal::Util::LruCache_2<::Amazon::Util::__AWSSDKUtils__IsSetMethodsCacheKey*, ::System::Reflection::MethodInfo*>* getStaticF_IsSetMethodsCache();

  static inline ::System::Collections::Generic::Dictionary_2<int32_t, ::StringW>* getStaticF_RFCEncodingSchemes();

  static inline ::StringW getStaticF_ValidPathCharacters();

  static inline ::Amazon::Runtime::Internal::Util::BackgroundInvoker* getStaticF__dispatcher();

  static inline ::StringW getStaticF__userAgent();

  /// @brief Method get_CorrectedUtcNow, addr 0x21fde98, size 0x11c, virtual false, abstract: false, final false
  static inline ::System::DateTime get_CorrectedUtcNow();

  /// @brief Method get_Dispatcher, addr 0x2200440, size 0xc0, virtual false, abstract: false, final false
  static inline ::Amazon::Runtime::Internal::Util::BackgroundInvoker* get_Dispatcher();

  /// @brief Method get_FormattedCurrentTimestampGMT, addr 0x2200b1c, size 0xb0, virtual false, abstract: false, final false
  static inline ::StringW get_FormattedCurrentTimestampGMT();

  /// @brief Method get_FormattedCurrentTimestampISO8601, addr 0x2200bcc, size 0x50, virtual false, abstract: false, final false
  static inline ::StringW get_FormattedCurrentTimestampISO8601();

  /// @brief Method get_FormattedCurrentTimestampRFC822, addr 0x2200ea4, size 0x50, virtual false, abstract: false, final false
  static inline ::StringW get_FormattedCurrentTimestampRFC822();

  static inline void setStaticF_EPOCH_START(::System::DateTime value);

  static inline void setStaticF_IsSetMethodsCache(::Amazon::Runtime::Internal::Util::LruCache_2<::Amazon::Util::__AWSSDKUtils__IsSetMethodsCacheKey*, ::System::Reflection::MethodInfo*>* value);

  static inline void setStaticF_RFCEncodingSchemes(::System::Collections::Generic::Dictionary_2<int32_t, ::StringW>* value);

  static inline void setStaticF_ValidPathCharacters(::StringW value);

  static inline void setStaticF__dispatcher(::Amazon::Runtime::Internal::Util::BackgroundInvoker* value);

  static inline void setStaticF__userAgent(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AWSSDKUtils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AWSSDKUtils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AWSSDKUtils(AWSSDKUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AWSSDKUtils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AWSSDKUtils(AWSSDKUtils const&) = delete;

  /// @brief Field DefaultBufferSize offset 0xffffffff size 0x4
  static constexpr int32_t DefaultBufferSize{ static_cast<int32_t>(0x2000) };

  /// @brief Field DefaultConnectionLimit offset 0xffffffff size 0x4
  static constexpr int32_t DefaultConnectionLimit{ static_cast<int32_t>(0x32) };

  /// @brief Field DefaultGovRegion offset 0xffffffff size 0x8
  static constexpr ::ConstString DefaultGovRegion{ u"us-gov-west-1" };

  /// @brief Field DefaultMarshallerVersion offset 0xffffffff size 0x4
  static constexpr int32_t DefaultMarshallerVersion{ static_cast<int32_t>(0x2) };

  /// @brief Field DefaultMaxIdleTime offset 0xffffffff size 0x4
  static constexpr int32_t DefaultMaxIdleTime{ static_cast<int32_t>(0xc350) };

  /// @brief Field DefaultMaxRetry offset 0xffffffff size 0x4
  static constexpr int32_t DefaultMaxRetry{ static_cast<int32_t>(0x3) };

  /// @brief Field DefaultProgressUpdateInterval offset 0xffffffff size 0x8
  static constexpr int64_t DefaultProgressUpdateInterval{ static_cast<int64_t>(0x19000) };

  /// @brief Field DefaultRegion offset 0xffffffff size 0x8
  static constexpr ::ConstString DefaultRegion{ u"us-east-1" };

  /// @brief Field EncodedSlash offset 0xffffffff size 0x8
  static constexpr ::ConstString EncodedSlash{ u"%2F" };

  /// @brief Field GMTDateFormat offset 0xffffffff size 0x8
  static constexpr ::ConstString GMTDateFormat{ u"ddd, dd MMM yyyy HH:mm:ss \\G\\M\\T" };

  /// @brief Field ISO8601BasicDateFormat offset 0xffffffff size 0x8
  static constexpr ::ConstString ISO8601BasicDateFormat{ u"yyyyMMdd" };

  /// @brief Field ISO8601BasicDateTimeFormat offset 0xffffffff size 0x8
  static constexpr ::ConstString ISO8601BasicDateTimeFormat{ u"yyyyMMddTHHmmssZ" };

  /// @brief Field ISO8601DateFormat offset 0xffffffff size 0x8
  static constexpr ::ConstString ISO8601DateFormat{ u"yyyy-MM-dd\\THH:mm:ss.fff\\Z" };

  /// @brief Field ISO8601DateFormatNoMS offset 0xffffffff size 0x8
  static constexpr ::ConstString ISO8601DateFormatNoMS{ u"yyyy-MM-dd\\THH:mm:ss\\Z" };

  /// @brief Field MaxIsSetMethodsCacheSize offset 0xffffffff size 0x4
  static constexpr int32_t MaxIsSetMethodsCacheSize{ static_cast<int32_t>(0x32) };

  /// @brief Field RFC822DateFormat offset 0xffffffff size 0x8
  static constexpr ::ConstString RFC822DateFormat{ u"ddd, dd MMM yyyy HH:mm:ss \\G\\M\\T" };

  /// @brief Field S3Accelerate offset 0xffffffff size 0x8
  static constexpr ::ConstString S3Accelerate{ u"s3-accelerate" };

  /// @brief Field S3Control offset 0xffffffff size 0x8
  static constexpr ::ConstString S3Control{ u"s3-control" };

  /// @brief Field Slash offset 0xffffffff size 0x8
  static constexpr ::ConstString Slash{ u"/" };

  /// @brief Field SlashChar offset 0xffffffff size 0x2
  static constexpr char16_t SlashChar{ u'/' };

  /// @brief Field UrlEncodedContent offset 0xffffffff size 0x8
  static constexpr ::ConstString UrlEncodedContent{ u"application/x-www-form-urlencoded; charset=utf-8" };

  /// @brief Field UserAgentHeader offset 0xffffffff size 0x8
  static constexpr ::ConstString UserAgentHeader{ u"User-Agent" };

  /// @brief Field ValidUrlCharacters offset 0xffffffff size 0x8
  static constexpr ::ConstString ValidUrlCharacters{ u"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789-_.~" };

  /// @brief Field ValidUrlCharactersRFC1738 offset 0xffffffff size 0x8
  static constexpr ::ConstString ValidUrlCharactersRFC1738{ u"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789-_." };

  /// @brief Field WindowsAltDirectorySeparatorChar offset 0xffffffff size 0x2
  static constexpr char16_t WindowsAltDirectorySeparatorChar{ u'/' };

  /// @brief Field WindowsDirectorySeparatorChar offset 0xffffffff size 0x2
  static constexpr char16_t WindowsDirectorySeparatorChar{ u'\\' };

  /// @brief Field WindowsVolumeSeparatorChar offset 0xffffffff size 0x2
  static constexpr char16_t WindowsVolumeSeparatorChar{ u':' };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Util::AWSSDKUtils, 0x10>, "Size mismatch!");

} // namespace Amazon::Util
NEED_NO_BOX(::Amazon::Util::AWSSDKUtils);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Util::AWSSDKUtils*, "Amazon.Util", "AWSSDKUtils");
NEED_NO_BOX(::Amazon::Util::__AWSSDKUtils__IsSetMethodsCacheKey);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Util::__AWSSDKUtils__IsSetMethodsCacheKey*, "Amazon.Util", "AWSSDKUtils/IsSetMethodsCacheKey");
NEED_NO_BOX(::Amazon::Util::__AWSSDKUtils____c);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Util::__AWSSDKUtils____c*, "Amazon.Util", "AWSSDKUtils/<>c");
NEED_NO_BOX(::Amazon::Util::__AWSSDKUtils____c__DisplayClass104_0);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Util::__AWSSDKUtils____c__DisplayClass104_0*, "Amazon.Util", "AWSSDKUtils/<>c__DisplayClass104_0");
NEED_NO_BOX(::Amazon::Util::__AWSSDKUtils____c__DisplayClass105_0);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Util::__AWSSDKUtils____c__DisplayClass105_0*, "Amazon.Util", "AWSSDKUtils/<>c__DisplayClass105_0");
NEED_NO_BOX(::Amazon::Util::__AWSSDKUtils____c__DisplayClass41_0);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Util::__AWSSDKUtils____c__DisplayClass41_0*, "Amazon.Util", "AWSSDKUtils/<>c__DisplayClass41_0");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Amazon::Util::__AWSSDKUtils____c__DisplayClass56_0_1, "Amazon.Util", "AWSSDKUtils/<>c__DisplayClass56_0`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Amazon::Util::__AWSSDKUtils____c__DisplayClass56_1_1, "Amazon.Util", "AWSSDKUtils/<>c__DisplayClass56_1`1");
NEED_NO_BOX(::Amazon::Util::__AWSSDKUtils____c__DisplayClass98_0);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Util::__AWSSDKUtils____c__DisplayClass98_0*, "Amazon.Util", "AWSSDKUtils/<>c__DisplayClass98_0");
NEED_NO_BOX(::Amazon::Util::__AWSSDKUtils____c__DisplayClass99_0);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Util::__AWSSDKUtils____c__DisplayClass99_0*, "Amazon.Util", "AWSSDKUtils/<>c__DisplayClass99_0");
NEED_NO_BOX(::Amazon::Util::__AWSSDKUtils____c__DisplayClass99_1);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Util::__AWSSDKUtils____c__DisplayClass99_1*, "Amazon.Util", "AWSSDKUtils/<>c__DisplayClass99_1");
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Util::__AWSSDKUtils___RunProcessAsync_d__105, "Amazon.Util", "AWSSDKUtils/<RunProcessAsync>d__105");
