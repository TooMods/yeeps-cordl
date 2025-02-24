#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__UnmanagedMemoryStream_def.hpp"
#include "System/Reflection/zzzz__Assembly_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RuntimeAssembly)
namespace System::IO {
class Stream;
}
namespace System::Reflection {
class AssemblyName;
}
namespace System::Reflection {
class Assembly;
}
namespace System::Reflection {
class ManifestResourceInfo;
}
namespace System::Reflection {
class Module;
}
namespace System::Reflection {
class __Assembly__ResolveEventHolder;
}
namespace System::Reflection {
class __RuntimeAssembly__UnmanagedMemoryStreamForModule;
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
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Reflection {
class RuntimeAssembly;
}
namespace System::Reflection {
class __RuntimeAssembly__UnmanagedMemoryStreamForModule;
}
// Write type traits
MARK_REF_PTR_T(::System::Reflection::RuntimeAssembly);
MARK_REF_PTR_T(::System::Reflection::__RuntimeAssembly__UnmanagedMemoryStreamForModule);
// Type: ::UnmanagedMemoryStreamForModule
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Reflection {
// Is value type: false
// CS Name: ::RuntimeAssembly::UnmanagedMemoryStreamForModule*
class CORDL_TYPE __RuntimeAssembly__UnmanagedMemoryStreamForModule : public ::System::IO::UnmanagedMemoryStream {
public:
  // Declarations
  /// @brief Field module, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__cordl_module, put = __cordl_internal_set__cordl_module))::System::Reflection::Module* _cordl_module;

  /// @brief Method Dispose, addr 0x261d060, size 0x18, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  static inline ::System::Reflection::__RuntimeAssembly__UnmanagedMemoryStreamForModule* New_ctor(::cordl_internals::Ptr<uint8_t> pointer, int64_t length, ::System::Reflection::Module* _cordl_module);

  constexpr ::System::Reflection::Module*& __cordl_internal_get__cordl_module();

  constexpr ::cordl_internals::to_const_pointer<::System::Reflection::Module*> const& __cordl_internal_get__cordl_module() const;

  constexpr void __cordl_internal_set__cordl_module(::System::Reflection::Module* value);

  /// @brief Method .ctor, addr 0x261ce18, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::cordl_internals::Ptr<uint8_t> pointer, int64_t length, ::System::Reflection::Module* _cordl_module);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RuntimeAssembly__UnmanagedMemoryStreamForModule();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RuntimeAssembly__UnmanagedMemoryStreamForModule", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RuntimeAssembly__UnmanagedMemoryStreamForModule(__RuntimeAssembly__UnmanagedMemoryStreamForModule&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RuntimeAssembly__UnmanagedMemoryStreamForModule", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RuntimeAssembly__UnmanagedMemoryStreamForModule(__RuntimeAssembly__UnmanagedMemoryStreamForModule const&) = delete;

  /// @brief Field module, offset: 0x68, size: 0x8, def value: None
  ::System::Reflection::Module* ____cordl_module;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::__RuntimeAssembly__UnmanagedMemoryStreamForModule, 0x70>, "Size mismatch!");

static_assert(offsetof(::System::Reflection::__RuntimeAssembly__UnmanagedMemoryStreamForModule, ____cordl_module) == 0x68, "Offset mismatch!");

} // namespace System::Reflection
// Type: System.Reflection::RuntimeAssembly
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Reflection {
// Is value type: false
// CS Name: ::System.Reflection::RuntimeAssembly*
class CORDL_TYPE RuntimeAssembly : public ::System::Reflection::Assembly {
public:
  // Declarations
  using UnmanagedMemoryStreamForModule = ::System::Reflection::__RuntimeAssembly__UnmanagedMemoryStreamForModule;

  __declspec(property(get = get_CodeBase))::StringW CodeBase;

  __declspec(property(get = get_EscapedCodeBase))::StringW EscapedCodeBase;

  __declspec(property(get = get_FullName))::StringW FullName;

  __declspec(property(get = get_Location))::StringW Location;

  __declspec(property(get = get_MonoAssembly)) void* MonoAssembly;

  __declspec(property(get = get_ReflectionOnly)) bool ReflectionOnly;

  /// @brief Field _denied, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__denied, put = __cordl_internal_set__denied))::System::Object* _denied;

  /// @brief Field _evidence, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__evidence, put = __cordl_internal_set__evidence))::System::Object* _evidence;

  /// @brief Field _granted, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__granted, put = __cordl_internal_set__granted))::System::Object* _granted;

  /// @brief Field _minimum, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__minimum, put = __cordl_internal_set__minimum))::System::Object* _minimum;

  /// @brief Field _mono_assembly, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__mono_assembly, put = __cordl_internal_set__mono_assembly)) void* _mono_assembly;

  /// @brief Field _optional, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__optional, put = __cordl_internal_set__optional))::System::Object* _optional;

  /// @brief Field _refuse, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__refuse, put = __cordl_internal_set__refuse))::System::Object* _refuse;

  /// @brief Field assemblyName, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_assemblyName, put = __cordl_internal_set_assemblyName))::StringW assemblyName;

  /// @brief Field fromByteArray, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get_fromByteArray, put = __cordl_internal_set_fromByteArray)) bool fromByteArray;

  /// @brief Field resolve_event_holder, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_resolve_event_holder, put = __cordl_internal_set_resolve_event_holder))::System::Reflection::__Assembly__ResolveEventHolder* resolve_event_holder;

  /// @brief Method Equals, addr 0x261cf94, size 0xa0, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method GetAotId, addr 0x261c88c, size 0x58, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetAotId();

  /// @brief Method GetAotIdInternal, addr 0x261c8e4, size 0x4, virtual false, abstract: false, final false
  static inline bool GetAotIdInternal(::ArrayW<uint8_t, ::Array<uint8_t>*> aotid);

  /// @brief Method GetCodeBase, addr 0x261c8fc, size 0x8, virtual false, abstract: false, final false
  static inline ::StringW GetCodeBase(::System::Reflection::Assembly* a, bool escaped);

  /// @brief Method GetCustomAttributes, addr 0x261cf18, size 0x70, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetCustomAttributes(::System::Type* attributeType, bool inherit);

  /// @brief Method GetCustomAttributes, addr 0x261ceb0, size 0x68, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetCustomAttributes(bool inherit);

  /// @brief Method GetHashCode, addr 0x261cf8c, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetManifestResourceInfo, addr 0x261c988, size 0x110, virtual true, abstract: false, final false
  inline ::System::Reflection::ManifestResourceInfo* GetManifestResourceInfo(::StringW resourceName);

  /// @brief Method GetManifestResourceInfoInternal, addr 0x261c984, size 0x4, virtual false, abstract: false, final false
  inline bool GetManifestResourceInfoInternal(::StringW name, ::System::Reflection::ManifestResourceInfo* info);

  /// @brief Method GetManifestResourceInternal, addr 0x261ca9c, size 0x4, virtual false, abstract: false, final false
  inline void* GetManifestResourceInternal(::StringW name, ByRef<int32_t> size, ByRef<::System::Reflection::Module*> _cordl_module);

  /// @brief Method GetManifestResourceNames, addr 0x261ca98, size 0x4, virtual true, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> GetManifestResourceNames();

  /// @brief Method GetManifestResourceStream, addr 0x261caa0, size 0x378, virtual true, abstract: false, final false
  inline ::System::IO::Stream* GetManifestResourceStream(::StringW name);

  /// @brief Method GetModule, addr 0x261c5c8, size 0x130, virtual true, abstract: false, final false
  inline ::System::Reflection::Module* GetModule(::StringW name);

  /// @brief Method GetModules, addr 0x261c6f8, size 0x194, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Reflection::Module*, ::Array<::System::Reflection::Module*>*> GetModules(bool getResourceModules);

  /// @brief Method GetModulesInternal, addr 0x261cf88, size 0x4, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Reflection::Module*, ::Array<::System::Reflection::Module*>*> GetModulesInternal();

  /// @brief Method GetName, addr 0x261c4fc, size 0x8, virtual true, abstract: false, final false
  inline ::System::Reflection::AssemblyName* GetName(bool copiedName);

  /// @brief Method GetObjectData, addr 0x261c3c0, size 0x8c, virtual true, abstract: false, final false
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method GetType, addr 0x261c504, size 0xc4, virtual true, abstract: false, final false
  inline ::System::Type* GetType(::StringW name, bool throwOnError, bool ignoreCase);

  /// @brief Method IsDefined, addr 0x261ce40, size 0x70, virtual true, abstract: false, final false
  inline bool IsDefined(::System::Type* attributeType, bool inherit);

  /// @brief Method LoadWithPartialNameInternal, addr 0x261c4d4, size 0x28, virtual false, abstract: false, final false
  static inline ::System::Reflection::RuntimeAssembly* LoadWithPartialNameInternal(::System::Reflection::AssemblyName* an, ::System::Security::Policy::Evidence* securityEvidence,
                                                                                   ByRef<::System::Threading::StackCrawlMark> stackMark);

  /// @brief Method LoadWithPartialNameInternal, addr 0x261c44c, size 0x88, virtual false, abstract: false, final false
  static inline ::System::Reflection::RuntimeAssembly* LoadWithPartialNameInternal(::StringW partialName, ::System::Security::Policy::Evidence* securityEvidence,
                                                                                   ByRef<::System::Threading::StackCrawlMark> stackMark);

  static inline ::System::Reflection::RuntimeAssembly* New_ctor();

  /// @brief Method ToString, addr 0x261d034, size 0x2c, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::System::Object*& __cordl_internal_get__denied();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get__denied() const;

  constexpr ::System::Object*& __cordl_internal_get__evidence();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get__evidence() const;

  constexpr ::System::Object*& __cordl_internal_get__granted();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get__granted() const;

  constexpr ::System::Object*& __cordl_internal_get__minimum();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get__minimum() const;

  constexpr void* const& __cordl_internal_get__mono_assembly() const;

  constexpr void*& __cordl_internal_get__mono_assembly();

  constexpr ::System::Object*& __cordl_internal_get__optional();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get__optional() const;

  constexpr ::System::Object*& __cordl_internal_get__refuse();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get__refuse() const;

  constexpr ::StringW const& __cordl_internal_get_assemblyName() const;

  constexpr ::StringW& __cordl_internal_get_assemblyName();

  constexpr bool const& __cordl_internal_get_fromByteArray() const;

  constexpr bool& __cordl_internal_get_fromByteArray();

  constexpr ::System::Reflection::__Assembly__ResolveEventHolder*& __cordl_internal_get_resolve_event_holder();

  constexpr ::cordl_internals::to_const_pointer<::System::Reflection::__Assembly__ResolveEventHolder*> const& __cordl_internal_get_resolve_event_holder() const;

  constexpr void __cordl_internal_set__denied(::System::Object* value);

  constexpr void __cordl_internal_set__evidence(::System::Object* value);

  constexpr void __cordl_internal_set__granted(::System::Object* value);

  constexpr void __cordl_internal_set__minimum(::System::Object* value);

  constexpr void __cordl_internal_set__mono_assembly(void* value);

  constexpr void __cordl_internal_set__optional(::System::Object* value);

  constexpr void __cordl_internal_set__refuse(::System::Object* value);

  constexpr void __cordl_internal_set_assemblyName(::StringW value);

  constexpr void __cordl_internal_set_fromByteArray(bool value);

  constexpr void __cordl_internal_set_resolve_event_holder(::System::Reflection::__Assembly__ResolveEventHolder* value);

  /// @brief Method .ctor, addr 0x261c354, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_CodeBase, addr 0x261c904, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_CodeBase();

  /// @brief Method get_EscapedCodeBase, addr 0x261c90c, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_EscapedCodeBase();

  /// @brief Method get_FullName, addr 0x261c914, size 0x4, virtual true, abstract: false, final false
  inline ::StringW get_FullName();

  /// @brief Method get_Location, addr 0x261c920, size 0x64, virtual true, abstract: false, final false
  inline ::StringW get_Location();

  /// @brief Method get_MonoAssembly, addr 0x261c918, size 0x8, virtual true, abstract: false, final false
  inline void* get_MonoAssembly();

  /// @brief Method get_ReflectionOnly, addr 0x261c8f8, size 0x4, virtual true, abstract: false, final false
  inline bool get_ReflectionOnly();

  /// @brief Method get_code_base, addr 0x261c8e8, size 0x8, virtual false, abstract: false, final false
  static inline ::StringW get_code_base(::System::Reflection::Assembly* a, bool escaped);

  /// @brief Method get_fullname, addr 0x261c8f4, size 0x4, virtual false, abstract: false, final false
  static inline ::StringW get_fullname(::System::Reflection::Assembly* a);

  /// @brief Method get_location, addr 0x261c8f0, size 0x4, virtual false, abstract: false, final false
  inline ::StringW get_location();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RuntimeAssembly();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RuntimeAssembly", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RuntimeAssembly(RuntimeAssembly&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RuntimeAssembly", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RuntimeAssembly(RuntimeAssembly const&) = delete;

  /// @brief Field _mono_assembly, offset: 0x10, size: 0x8, def value: None
  void* ____mono_assembly;

  /// @brief Field _evidence, offset: 0x18, size: 0x8, def value: None
  ::System::Object* ____evidence;

  /// @brief Field resolve_event_holder, offset: 0x20, size: 0x8, def value: None
  ::System::Reflection::__Assembly__ResolveEventHolder* ___resolve_event_holder;

  /// @brief Field _minimum, offset: 0x28, size: 0x8, def value: None
  ::System::Object* ____minimum;

  /// @brief Field _optional, offset: 0x30, size: 0x8, def value: None
  ::System::Object* ____optional;

  /// @brief Field _refuse, offset: 0x38, size: 0x8, def value: None
  ::System::Object* ____refuse;

  /// @brief Field _granted, offset: 0x40, size: 0x8, def value: None
  ::System::Object* ____granted;

  /// @brief Field _denied, offset: 0x48, size: 0x8, def value: None
  ::System::Object* ____denied;

  /// @brief Field fromByteArray, offset: 0x50, size: 0x1, def value: None
  bool ___fromByteArray;

  /// @brief Field assemblyName, offset: 0x58, size: 0x8, def value: None
  ::StringW ___assemblyName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::RuntimeAssembly, 0x60>, "Size mismatch!");

static_assert(offsetof(::System::Reflection::RuntimeAssembly, ____mono_assembly) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::RuntimeAssembly, ____evidence) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::RuntimeAssembly, ___resolve_event_holder) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::RuntimeAssembly, ____minimum) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::RuntimeAssembly, ____optional) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::RuntimeAssembly, ____refuse) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::RuntimeAssembly, ____granted) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::RuntimeAssembly, ____denied) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::RuntimeAssembly, ___fromByteArray) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::RuntimeAssembly, ___assemblyName) == 0x58, "Offset mismatch!");

} // namespace System::Reflection
NEED_NO_BOX(::System::Reflection::RuntimeAssembly);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::RuntimeAssembly*, "System.Reflection", "RuntimeAssembly");
NEED_NO_BOX(::System::Reflection::__RuntimeAssembly__UnmanagedMemoryStreamForModule);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::__RuntimeAssembly__UnmanagedMemoryStreamForModule*, "System.Reflection", "RuntimeAssembly/UnmanagedMemoryStreamForModule");
