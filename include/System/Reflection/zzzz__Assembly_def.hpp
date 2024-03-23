#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Assembly)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System::IO {
class Stream;
}
namespace System::Reflection {
struct AssemblyNameFlags;
}
namespace System::Reflection {
class AssemblyName;
}
namespace System::Reflection {
class ICustomAttributeProvider;
}
namespace System::Reflection {
class ManifestResourceInfo;
}
namespace System::Reflection {
class Module;
}
namespace System::Reflection {
class RuntimeAssembly;
}
namespace System::Reflection {
class TypeInfo;
}
namespace System::Reflection {
class __Assembly__ResolveEventHolder;
}
namespace System::Reflection {
class __Assembly___get_DefinedTypes_d__120;
}
namespace System::Runtime::InteropServices {
class _Assembly;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Security::Policy {
class Evidence;
}
namespace System::Threading {
struct StackCrawlMark;
}
namespace System {
class Exception;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace System {
class Version;
}
// Forward declare root types
namespace System::Reflection {
class Assembly;
}
namespace System::Reflection {
class __Assembly__ResolveEventHolder;
}
namespace System::Reflection {
class __Assembly___get_DefinedTypes_d__120;
}
// Write type traits
MARK_REF_PTR_T(::System::Reflection::Assembly);
MARK_REF_PTR_T(::System::Reflection::__Assembly__ResolveEventHolder);
MARK_REF_PTR_T(::System::Reflection::__Assembly___get_DefinedTypes_d__120);
// Type: ::ResolveEventHolder
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Reflection {
// Is value type: false
// CS Name: ::Assembly::ResolveEventHolder*
class CORDL_TYPE __Assembly__ResolveEventHolder : public ::System::Object {
public:
  // Declarations
  static inline ::System::Reflection::__Assembly__ResolveEventHolder* New_ctor();

  /// @brief Method .ctor, addr 0x26197c0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Assembly__ResolveEventHolder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Assembly__ResolveEventHolder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Assembly__ResolveEventHolder(__Assembly__ResolveEventHolder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Assembly__ResolveEventHolder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Assembly__ResolveEventHolder(__Assembly__ResolveEventHolder const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::__Assembly__ResolveEventHolder, 0x10>, "Size mismatch!");

} // namespace System::Reflection
// Type: ::<get_DefinedTypes>d__120
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 60, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Reflection {
// Is value type: false
// CS Name: ::Assembly::<get_DefinedTypes>d__120*
class CORDL_TYPE __Assembly___get_DefinedTypes_d__120 : public ::System::Object {
public:
  // Declarations
  __declspec(property(
      get = System_Collections_Generic_IEnumerator_System_Reflection_TypeInfo__get_Current))::System::Reflection::TypeInfo* System_Collections_Generic_IEnumerator_System_Reflection_TypeInfo__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Reflection::TypeInfo* __2__current;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::System::Reflection::Assembly* __4__this;

  /// @brief Field <>7__wrap1, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get___7__wrap1, put = __cordl_internal_set___7__wrap1))::ArrayW<::System::Type*, ::Array<::System::Type*>*> __7__wrap1;

  /// @brief Field <>7__wrap2, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get___7__wrap2, put = __cordl_internal_set___7__wrap2)) int32_t __7__wrap2;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Reflection::TypeInfo*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::System::Reflection::TypeInfo*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Reflection::TypeInfo*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Reflection::TypeInfo*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x26197cc, size 0xb4, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::System::Reflection::__Assembly___get_DefinedTypes_d__120* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<System.Reflection.TypeInfo>.GetEnumerator, addr 0x26198d0, size 0xa4, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::System::Reflection::TypeInfo*>* System_Collections_Generic_IEnumerable_System_Reflection_TypeInfo__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Reflection.TypeInfo>.get_Current, addr 0x2619880, size 0x8, virtual true, abstract: false, final true
  inline ::System::Reflection::TypeInfo* System_Collections_Generic_IEnumerator_System_Reflection_TypeInfo__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x2619974, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x2619888, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x26198c8, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x26197c8, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Reflection::TypeInfo*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Reflection::TypeInfo*> const& __cordl_internal_get___2__current() const;

  constexpr ::System::Reflection::Assembly*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::System::Reflection::Assembly*> const& __cordl_internal_get___4__this() const;

  constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*> const& __cordl_internal_get___7__wrap1() const;

  constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*>& __cordl_internal_get___7__wrap1();

  constexpr int32_t const& __cordl_internal_get___7__wrap2() const;

  constexpr int32_t& __cordl_internal_get___7__wrap2();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Reflection::TypeInfo* value);

  constexpr void __cordl_internal_set___4__this(::System::Reflection::Assembly* value);

  constexpr void __cordl_internal_set___7__wrap1(::ArrayW<::System::Type*, ::Array<::System::Type*>*> value);

  constexpr void __cordl_internal_set___7__wrap2(int32_t value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  /// @brief Method .ctor, addr 0x2619784, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Reflection::TypeInfo*>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::System::Reflection::TypeInfo*>* i___System__Collections__Generic__IEnumerable_1___System__Reflection__TypeInfo__() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Reflection::TypeInfo*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Reflection::TypeInfo*>* i___System__Collections__Generic__IEnumerator_1___System__Reflection__TypeInfo__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Assembly___get_DefinedTypes_d__120();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Assembly___get_DefinedTypes_d__120", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Assembly___get_DefinedTypes_d__120(__Assembly___get_DefinedTypes_d__120&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Assembly___get_DefinedTypes_d__120", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Assembly___get_DefinedTypes_d__120(__Assembly___get_DefinedTypes_d__120 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Reflection::TypeInfo* _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::System::Reflection::Assembly* _____4__this;

  /// @brief Field <>7__wrap1, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::System::Type*, ::Array<::System::Type*>*> _____7__wrap1;

  /// @brief Field <>7__wrap2, offset: 0x38, size: 0x4, def value: None
  int32_t _____7__wrap2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::__Assembly___get_DefinedTypes_d__120, 0x40>, "Size mismatch!");

static_assert(offsetof(::System::Reflection::__Assembly___get_DefinedTypes_d__120, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::__Assembly___get_DefinedTypes_d__120, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::__Assembly___get_DefinedTypes_d__120, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::__Assembly___get_DefinedTypes_d__120, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::__Assembly___get_DefinedTypes_d__120, _____7__wrap1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::__Assembly___get_DefinedTypes_d__120, _____7__wrap2) == 0x38, "Offset mismatch!");

} // namespace System::Reflection
// Type: System.Reflection::Assembly
// SizeInfo { instance_size: 16, native_size: 1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Reflection {
// Is value type: false
// CS Name: ::System.Reflection::Assembly*
class CORDL_TYPE Assembly : public ::System::Object {
public:
  // Declarations
  using ResolveEventHolder = ::System::Reflection::__Assembly__ResolveEventHolder;

  using _get_DefinedTypes_d__120 = ::System::Reflection::__Assembly___get_DefinedTypes_d__120;

  __declspec(property(get = get_CodeBase))::StringW CodeBase;

  __declspec(property(get = get_DefinedTypes))::System::Collections::Generic::IEnumerable_1<::System::Reflection::TypeInfo*>* DefinedTypes;

  __declspec(property(get = get_EscapedCodeBase))::StringW EscapedCodeBase;

  __declspec(property(get = get_FullName))::StringW FullName;

  __declspec(property(get = get_IsDynamic)) bool IsDynamic;

  __declspec(property(get = get_IsFullyTrusted)) bool IsFullyTrusted;

  __declspec(property(get = get_Location))::StringW Location;

  __declspec(property(get = get_MonoAssembly)) void* MonoAssembly;

  __declspec(property(get = get_ReflectionOnly)) bool ReflectionOnly;

  /// @brief Convert operator to "::System::Reflection::ICustomAttributeProvider"
  constexpr operator ::System::Reflection::ICustomAttributeProvider*() noexcept;

  /// @brief Convert operator to "::System::Runtime::InteropServices::_Assembly"
  constexpr operator ::System::Runtime::InteropServices::_Assembly*() noexcept;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  /// @brief Method CreateNIE, addr 0x26195cc, size 0x74, virtual false, abstract: false, final false
  static inline ::System::Exception* CreateNIE();

  /// @brief Method Equals, addr 0x26195c4, size 0x8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method GetAssembly, addr 0x2618d84, size 0xc8, virtual false, abstract: false, final false
  static inline ::System::Reflection::Assembly* GetAssembly(::System::Type* type);

  /// @brief Method GetCallingAssembly, addr 0x26194f8, size 0x4, virtual false, abstract: false, final false
  static inline ::System::Reflection::Assembly* GetCallingAssembly();

  /// @brief Method GetCustomAttributes, addr 0x2618a08, size 0x40, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetCustomAttributes(::System::Type* attributeType, bool inherit);

  /// @brief Method GetCustomAttributes, addr 0x26189c8, size 0x40, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetCustomAttributes(bool inherit);

  /// @brief Method GetEntryAssembly, addr 0x2618e4c, size 0x4, virtual false, abstract: false, final false
  static inline ::System::Reflection::Assembly* GetEntryAssembly();

  /// @brief Method GetExecutingAssembly, addr 0x26194b8, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Reflection::Assembly* GetExecutingAssembly();

  /// @brief Method GetFlags, addr 0x2618ca4, size 0x2c, virtual false, abstract: false, final false
  inline ::System::Reflection::AssemblyNameFlags GetFlags();

  /// @brief Method GetHashCode, addr 0x26195bc, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetManifestResourceInfo, addr 0x261953c, size 0x40, virtual true, abstract: false, final false
  inline ::System::Reflection::ManifestResourceInfo* GetManifestResourceInfo(::StringW resourceName);

  /// @brief Method GetManifestResourceNames, addr 0x26194fc, size 0x40, virtual true, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> GetManifestResourceNames();

  /// @brief Method GetManifestResourceStream, addr 0x2618a48, size 0x40, virtual true, abstract: false, final false
  inline ::System::IO::Stream* GetManifestResourceStream(::StringW name);

  /// @brief Method GetManifestResourceStream, addr 0x2618c10, size 0x10, virtual false, abstract: false, final false
  inline ::System::IO::Stream* GetManifestResourceStream(::StringW name, ByRef<::System::Threading::StackCrawlMark> stackMark, bool skipSecurityCheck);

  /// @brief Method GetManifestResourceStream, addr 0x2618a88, size 0x188, virtual false, abstract: false, final false
  inline ::System::IO::Stream* GetManifestResourceStream(::System::Type* type, ::StringW name, bool skipSecurityCheck, ByRef<::System::Threading::StackCrawlMark> stackMark);

  /// @brief Method GetModule, addr 0x261966c, size 0x24, virtual true, abstract: false, final false
  inline ::System::Reflection::Module* GetModule(::StringW name);

  /// @brief Method GetModules, addr 0x2619464, size 0x14, virtual true, abstract: false, final true
  inline ::ArrayW<::System::Reflection::Module*, ::Array<::System::Reflection::Module*>*> GetModules();

  /// @brief Method GetModules, addr 0x2619690, size 0x24, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Reflection::Module*, ::Array<::System::Reflection::Module*>*> GetModules(bool getResourceModules);

  /// @brief Method GetModulesInternal, addr 0x2619478, size 0x40, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Reflection::Module*, ::Array<::System::Reflection::Module*>*> GetModulesInternal();

  /// @brief Method GetName, addr 0x2618d68, size 0x14, virtual true, abstract: false, final false
  inline ::System::Reflection::AssemblyName* GetName();

  /// @brief Method GetName, addr 0x2618d28, size 0x40, virtual true, abstract: false, final false
  inline ::System::Reflection::AssemblyName* GetName(bool copiedName);

  /// @brief Method GetObjectData, addr 0x2618948, size 0x40, virtual true, abstract: false, final false
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method GetPublicKey, addr 0x2618c4c, size 0x2c, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetPublicKey();

  /// @brief Method GetSimpleName, addr 0x2618c20, size 0x2c, virtual false, abstract: false, final false
  inline ::StringW GetSimpleName();

  /// @brief Method GetType, addr 0x2618d04, size 0x18, virtual true, abstract: false, final false
  inline ::System::Type* GetType(::StringW name);

  /// @brief Method GetType, addr 0x2618cec, size 0x18, virtual true, abstract: false, final false
  inline ::System::Type* GetType(::StringW name, bool throwOnError);

  /// @brief Method GetType, addr 0x2619648, size 0x24, virtual true, abstract: false, final false
  inline ::System::Type* GetType(::StringW name, bool throwOnError, bool ignoreCase);

  /// @brief Method GetTypes, addr 0x2618cd8, size 0x14, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> GetTypes();

  /// @brief Method GetTypes, addr 0x2618cd0, size 0x8, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> GetTypes(bool exportedOnly);

  /// @brief Method GetVersion, addr 0x2618c78, size 0x2c, virtual false, abstract: false, final false
  inline ::System::Version* GetVersion();

  /// @brief Method InternalGetSatelliteAssembly, addr 0x2618e50, size 0x3e0, virtual false, abstract: false, final false
  inline ::System::Reflection::RuntimeAssembly* InternalGetSatelliteAssembly(::StringW name, ::System::Globalization::CultureInfo* culture, ::System::Version* version, bool throwOnFileNotFound,
                                                                             ByRef<::System::Threading::StackCrawlMark> stackMark);

  /// @brief Method InternalGetType, addr 0x2618d1c, size 0xc, virtual false, abstract: false, final false
  inline ::System::Type* InternalGetType(::System::Reflection::Module* _cordl_module, ::StringW name, bool throwOnError, bool ignoreCase);

  /// @brief Method IsDefined, addr 0x2618988, size 0x40, virtual true, abstract: false, final false
  inline bool IsDefined(::System::Type* attributeType, bool inherit);

  /// @brief Method Load, addr 0x2619364, size 0x28, virtual false, abstract: false, final false
  static inline ::System::Reflection::Assembly* Load(::System::Reflection::AssemblyName* assemblyRef);

  /// @brief Method Load, addr 0x261933c, size 0x28, virtual false, abstract: false, final false
  static inline ::System::Reflection::Assembly* Load(::StringW assemblyString);

  /// @brief Method LoadFrom, addr 0x2619314, size 0x8, virtual false, abstract: false, final false
  static inline ::System::Reflection::Assembly* LoadFrom(::StringW assemblyFile, bool refOnly, ByRef<::System::Threading::StackCrawlMark> stackMark);

  /// @brief Method LoadFrom, addr 0x261931c, size 0x20, virtual false, abstract: false, final false
  static inline ::System::Reflection::Assembly* LoadFrom(::StringW assemblyFile, ::System::Security::Policy::Evidence* securityEvidence);

  /// @brief Method LoadWithPartialName, addr 0x26193d4, size 0xc, virtual false, abstract: false, final false
  static inline ::System::Reflection::Assembly* LoadWithPartialName(::StringW partialName);

  /// @brief Method LoadWithPartialName, addr 0x26193e0, size 0x8, virtual false, abstract: false, final false
  static inline ::System::Reflection::Assembly* LoadWithPartialName(::StringW partialName, ::System::Security::Policy::Evidence* securityEvidence);

  /// @brief Method LoadWithPartialName, addr 0x26193ec, size 0x78, virtual false, abstract: false, final false
  static inline ::System::Reflection::Assembly* LoadWithPartialName(::StringW partialName, ::System::Security::Policy::Evidence* securityEvidence, bool oldBehavior);

  static inline ::System::Reflection::Assembly* New_ctor();

  /// @brief Method ReflectionOnlyLoad, addr 0x261938c, size 0x48, virtual false, abstract: false, final false
  static inline ::System::Reflection::Assembly* ReflectionOnlyLoad(::StringW assemblyString);

  /// @brief Method ToString, addr 0x2618d7c, size 0x8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x26197b8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_CodeBase, addr 0x2618808, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_CodeBase();

  /// @brief Method get_DefinedTypes, addr 0x261970c, size 0x78, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::System::Reflection::TypeInfo*>* get_DefinedTypes();

  /// @brief Method get_EscapedCodeBase, addr 0x2618848, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_EscapedCodeBase();

  /// @brief Method get_FullName, addr 0x2618888, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_FullName();

  /// @brief Method get_IsDynamic, addr 0x26196b4, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsDynamic();

  /// @brief Method get_IsFullyTrusted, addr 0x2619640, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsFullyTrusted();

  /// @brief Method get_Location, addr 0x2618908, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_Location();

  /// @brief Method get_MonoAssembly, addr 0x26188c8, size 0x40, virtual true, abstract: false, final false
  inline void* get_MonoAssembly();

  /// @brief Method get_ReflectionOnly, addr 0x261957c, size 0x40, virtual true, abstract: false, final false
  inline bool get_ReflectionOnly();

  /// @brief Convert to "::System::Reflection::ICustomAttributeProvider"
  constexpr ::System::Reflection::ICustomAttributeProvider* i___System__Reflection__ICustomAttributeProvider() noexcept;

  /// @brief Convert to "::System::Runtime::InteropServices::_Assembly"
  constexpr ::System::Runtime::InteropServices::_Assembly* i___System__Runtime__InteropServices___Assembly() noexcept;

  /// @brief Convert to "::System::Runtime::Serialization::ISerializable"
  constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() noexcept;

  /// @brief Method load_with_partial_name, addr 0x26193e8, size 0x4, virtual false, abstract: false, final false
  static inline ::System::Reflection::Assembly* load_with_partial_name(::StringW name, ::System::Security::Policy::Evidence* e);

  /// @brief Method op_Equality, addr 0x26196bc, size 0x50, virtual false, abstract: false, final false
  static inline bool op_Equality(::System::Reflection::Assembly* left, ::System::Reflection::Assembly* right);

  /// @brief Method op_Inequality, addr 0x26192bc, size 0x58, virtual false, abstract: false, final false
  static inline bool op_Inequality(::System::Reflection::Assembly* left, ::System::Reflection::Assembly* right);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Assembly();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Assembly", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Assembly(Assembly&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Assembly", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Assembly(Assembly const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::Assembly, 0x10>, "Size mismatch!");

} // namespace System::Reflection
NEED_NO_BOX(::System::Reflection::Assembly);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::Assembly*, "System.Reflection", "Assembly");
NEED_NO_BOX(::System::Reflection::__Assembly__ResolveEventHolder);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::__Assembly__ResolveEventHolder*, "System.Reflection", "Assembly/ResolveEventHolder");
NEED_NO_BOX(::System::Reflection::__Assembly___get_DefinedTypes_d__120);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::__Assembly___get_DefinedTypes_d__120*, "System.Reflection", "Assembly/<get_DefinedTypes>d__120");
